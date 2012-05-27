/*
Author: Ali Taher

Problem:
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

Algorithm:
Loop through 1 to 100 and add to the sumSquares and squareSum variables.  At the end of the loop square the squareSum and find the difference 
between the two sums.

*/

#include <iostream>
using namespace std;

int main(){
	int sumSquares = 0;
	int squareSum = 0;
	
	for(int x = 1; x <= 100; x++){
		sumSquares += (x*x);
		squareSum += x;
	}
	
	squareSum = squareSum*squareSum;

	cout << (squareSum - sumSquares) << endl;
}