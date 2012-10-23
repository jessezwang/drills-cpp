//============================================================================
// Name        : main.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : Entrance to all the other subroutines
//============================================================================

#include "isStringSimilarity.hpp"
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
//	ofstream of("input00.txt");
//	for(int i=0; i<100000; i++)
//		of<<"a";
	ifstream file("input00.txt");
	cin.rdbuf(file.rdbuf());

	StringSimilarity ss;
	ss.run();
	return 0;
}
