/*
 * algKMPmatch.hpp
 *
 *  Created on: Oct 21, 2012
 *      Author: zhewang
 */

#ifndef ALGKMPMATCH_HPP_
#define ALGKMPMATCH_HPP_

#include <string>

#endif /* ALGKMPMATCH_HPP_ */

using namespace std;

class KmpMatch{
public:
	void genNext(string pat, int* next);
	int kmpSearch(string txt, string pat, const int* next);
};
