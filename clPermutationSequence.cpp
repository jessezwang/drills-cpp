/*
 * clPermutationSequence.cpp
 *
 *  Created on: Oct 25, 2012
 *      Author: zhewang
 */

#include "lcPermutationSequence.hpp"
#include <vector>
#include <iostream>

string PermutationSequence::kthPermutation(int n, int k){
	int order, i, j;
	string ret;
	vector<int> v;
	for (i=1; i<=n; i++)
		v.push_back(i);
	for (j=n; j>=1; j--){
		for (i=1, order=1; i<j; i++) order*=i;
		ret+='0'+v[(k-1)/order];
		if(j==1) return ret;
		v.erase(v.begin()+(k-1)/order);
		k-=(k-1)/order*order;
	}
	return ret;
}


