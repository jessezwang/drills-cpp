/*
 * algKMPmatch.cpp
 *
 *  Created on: Oct 21, 2012
 *      Author: zhewang
 */
#include "algKMPmatch.hpp"

void KmpMatch::genNext(string pat, int* next)
{
	int m=pat.length();
	int i=0, j=-1;
	next[i]=j;
	while( i<m ){
		while(j>=0 && pat[i]!=pat[j]) j=next[j];
		i++, j++;
		next[i]=j;
	}
}

int KmpMatch::kmpSearch(string txt, string pat, const int* next)
{
	int n=txt.length(), m=pat.length();
    int i=0, j=0;
    while (i<n){
        while (j>=0 && txt[i]!=pat[j]) j=next[j];
        i++; j++;
        if (j==m) return i-j;
    }
	return -1;
}

