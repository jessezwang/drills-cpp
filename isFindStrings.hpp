/*
 * isFindStrings.hpp
 *
 *  Created on: Oct 23, 2012
 *      Author: zhewang
 */

#ifndef ISFINDSTRINGS_HPP_
#define ISFINDSTRINGS_HPP_

#include <vector>
#include <tr1/unordered_set>
#include <string>

#endif /* ISFINDSTRINGS_HPP_ */
using namespace std;
class FindStrings{
	tr1::unordered_set<string> substrings;
	vector<string> sorted_substrings;
	void findSubstring(unsigned k);
public:
	void run();
};
