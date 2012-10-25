/*
 * isFindStrings.cpp
 *
 *  Created on: Oct 23, 2012
 *      Author: zhewang
 */
#include "isFindStrings.hpp"
#include <iostream>
#include <algorithm>
using namespace std;

void FindStrings::findSubstring(unsigned k){
	if (k<=sorted_substrings.size()){
		cout<<sorted_substrings[k-1]<<endl;
	} else
		cout<<"INVALID"<<endl;
}

void FindStrings::sortSubstrings(unsigned low, unsigned high, unsigned d){
	if (low+10>=high){
		sort(sorted_substrings.begin()+low,sorted_substrings.begin()+high);
		return;
	}
	int N = sorted_substrings.size();
	const int R=26;
	int count[R+2];
	for (unsigned i=0; i<R+2; i++)
		count[i]=0;
	for (unsigned i=low; i<high; i++)
		count[sorted_substrings[i].length()==d?1:(sorted_substrings[i][d]-'a'+2)]++;
	for (unsigned i=0; i<R+1; i++)
		count[i+1]+=count[i];
	for (unsigned i=low; i<high; i++)
		aux[count[sorted_substrings[i].length()==d?0:(sorted_substrings[i][d]-'a'+1)]++]=sorted_substrings[i];
	for (unsigned i=low; i<high; i++)
		sorted_substrings[i]=aux[i-low];
	for (int i=0; i<R; i++)
		sortSubstrings(low+count[i],low+count[i+1],d+1);
}

void FindStrings::run(){
	int n, q;
	unsigned k;
	string s;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>s;
		for(unsigned sz=1; sz<=s.length(); sz++)
			for (unsigned beg=0; beg<s.length()-sz+1; beg++)
				substrings.insert(s.substr(beg,sz));
	}
	sorted_substrings.assign(substrings.begin(),substrings.end());
	cin>>q;
//	aux.assign(sorted_substrings.size(),"");
//	aux.reserve(sorted_substrings.size());
	sortSubstrings(0, sorted_substrings.size(),0);
	for (int j=0; j<q; j++) {
		cin>>k;
		findSubstring(k);
	}
}




