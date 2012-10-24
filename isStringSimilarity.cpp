//============================================================================
// Name        : isStringSimilarity.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : String Similarity. www.interviewstreet.com/challenges/#4
//============================================================================

#include "isStringSimilarity.hpp"
using namespace std;

int StringSimilarity::numberOfLCP(string s){

	int len=s.length();
	int z[len];
	int ret=0;
	int left=0, right=0;
	for (int i=1; i<len; i++){
		if (i>right) {
			left=right=i;
			while (i<len && s[right]==s[right-left]) right++;
			z[i]=right---left;
		} else {
			if (i+z[i-left]<=right) z[i]=z[i-left];
			else {
				left=i;
				while (right<len && s[right]==s[right-left]) right++;
				z[i]=right---left;
			}
		}
	}
	for (int i=1; i<len; i++) ret+=z[i];
	return ret;
};

void StringSimilarity::run(){
	int N;
	string s;
	cin>>N;
	for (int i=0; i<N; i++){
		cin>>s;
		cout<<numberOfLCP(s)<<endl;
	}
}




