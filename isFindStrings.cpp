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

void FindStrings::findSubstring(int k){
	if (k<=sorted_substrings.size()){
		cout<<sorted_substrings[k-1]<<endl;
	} else
		cout<<"INVALID"<<endl;
}

void FindStrings::run(){
	int n, q, k;
	string s;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>s;
		for(unsigned sz=1; sz<s.length()+1; sz++)
			for (unsigned beg=0; beg<s.length()-sz+1; beg++){
				substrings.insert(s.substr(beg,sz));
//				char *cstr = new char [sz+1];
//				cstr = strcpy(cstr, s.substr(beg,sz).c_str());
//				substrings.insert(cstr);
			}
	}
	sorted_substrings.assign(substrings.begin(),substrings.end());
	sort(sorted_substrings.begin(), sorted_substrings.end());
	cin>>q;
	cout<<"q="<<q<<endl;
	for (vector<string>::iterator it=sorted_substrings.begin(); it!=sorted_substrings.end(); it++)
		cout<<*it<<endl;
	for (int j=0; j<q; j++) {
		cin>>k;
		findSubstring(k);
	}


}




