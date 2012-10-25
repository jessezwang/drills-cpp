/*
 * lcPalindromeNumber.cpp
 *
 *  Created on: Oct 24, 2012
 *      Author: zhewang
 */

#include "lcPalindromeNumber.hpp"
#include <iostream>

int PalindromeNumber::power(int ith){
	int ret=1;
	for (int i=0; i<ith; i++)
		ret*=10;
	return ret;
}
bool PalindromeNumber::isPalindrome(int i){
	if (i<0) return false;
	if (i<10) return true;
	int digits = 2;
	int k=i;
	while(power(digits)<=i && power(digits-1)<MAX/10)
		digits++;
	cout<<digits<<endl;
	cout<<i/power(digits-1)<<","<< i%power(1)<<endl;
	if (i/power(digits-1)!=i%power(1)) return false;
	for (int j =1; j<=digits/2; j++){
		cout<<i%power(digits-j)/power(digits-j-1)<<","<<i%power(j+1)/power(j)<<endl;
		if (i%power(digits-j)/power(digits-j-1)!=i%power(j+1)/power(j)) return false;
	}
	return true;
}


