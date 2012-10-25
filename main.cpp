//============================================================================
// Name        : main.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : Entrance to all the other subroutines
//============================================================================

#include "isFindStrings.hpp"
#include "lcPalindromeNumber.hpp"
#include <fstream>
#include <iostream>
#include <tr1/unordered_set>
using namespace std;

int main(int argc, char *argv[]){
//	ifstream file("input00.txt");
//	cin.rdbuf(file.rdbuf());
//	FindStrings fs;
//	fs.run();
	PalindromeNumber pn;
	cout<<pn.isPalindrome(2147447412);
	return 0;
}
