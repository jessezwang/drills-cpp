//============================================================================
// Name        : main.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : Entrance to all the other subroutines
//============================================================================

#include "isFindStrings.hpp"
#include "lcPermutationSequence.hpp"
#include <fstream>
#include <iostream>
#include <tr1/unordered_set>
using namespace std;

int main(int argc, char *argv[]){
//	ifstream file("input00.txt");
//	cin.rdbuf(file.rdbuf());
//	FindStrings fs;
//	fs.run();
	PermutationSequence ps;
	cout<<ps.kthPermutation(3,2);
	return 0;
}
