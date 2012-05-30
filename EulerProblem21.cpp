/*
Author: Ali Taher

Problem:
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. 
The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.


Algorithm:
Main while loop through all numbers from 1 to 10000. Two inner for loops, first one calculates the sum of proper divisors
of the counter 'a' and the second one calculates the sum of proper divisors from the first for loop.  

*/ 

#include <iostream>
using namespace std;

int main(){
	int a = 1;
	int divisorSumA = 0;
	int divisorSumB = 0;
	int sum = 0;

	while(a < 10000){

		for(int x = 1; x < a; x++){
			if(a % x == 0)
				divisorSumA += x;
		}
		if(divisorSumA != 0){
			for(int y = 1; y < divisorSumA; y++){
				if(divisorSumA % y == 0)
					divisorSumB += y;
			}
		}
		if(divisorSumB == a  && divisorSumB != divisorSumA ){
			sum += a ;
			cout << divisorSumA << "  " << divisorSumB << endl;
		}

		divisorSumA = 0;
		divisorSumB = 0;
		a++;
	}
	cout << sum << endl;

}