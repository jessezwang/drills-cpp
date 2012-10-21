//============================================================================
// Name        : main.cpp
// Author      : Zhe Wang
// Version     :
// Copyright   : GPL 3.0
// Description : Entrance to all the other subroutines
//============================================================================

#include "isStringSimilarity.h"
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){

	ifstream file("input00.txt");
	cin.rdbuf(file.rdbuf());

	StringSimilarity ss;
	ss.run();
	return 0;
}
