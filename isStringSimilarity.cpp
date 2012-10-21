//============================================================================
// Name        : isStringSimilarity.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : String Similarity. www.interviewstreet.com/challenges/#4
//============================================================================


#include "isStringSimilarity.h"
#include <queue>
using namespace std;

int StringSimilarity::numberOfLCP(string s){
	int ret=0, loop=0;
	int len=s.length();
	queue<int> ind;
	for (int i=1; i<len; i++){
		if (s[i]==s[loop]){
			ret++;
			ind.push(i);
		}
	}
	loop++;
	while(loop<len && !ind.empty()){
		int sz = ind.size();
		for (int i=0; i<sz; i++){
			if ( ind.front()+1<len && s[ind.front()+1]==s[loop] ){
				ret++;
				ind.push(ind.front()+1);
			}
			ind.pop();
		}
		loop++;
	}
	return ret+len;
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




