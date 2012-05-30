/*
Author: Ali Taher

Problem:
A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, 
the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.

A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.

As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24. 
By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. 
However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be 
expressed as the sum of two abundant numbers is less than this limit.

Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.


Algorithm:
First while loop to generate all abundant numbers from 1 to 28123.  Then two nexted for loops to generate all 
combinations of sums from two abundant numbers in the found vector.  Use this sum to set the check array index to 1.
Last for loop through check array and summing the index value which has not been set to 1.

*/


#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n = 1;
	int divisorSum = 0;
	unsigned int sum = 0;
	vector<int> found;
	int check[28123] ;

	while(n < 28123){  //find all abundant numbers below limit

		for(int x = 1; x < n; x++){
			if(n % x == 0)
				divisorSum += x;
		}
		if(divisorSum > n){  //abundant number
			found.push_back(n);

		}

		divisorSum = 0;
		n++;
	}

	//mark check array with all numbers as sum of two abundant numbers
	for(int x = 0; x < found.size(); x++){  
		for(int y = x; y < found.size(); y++){
			if((found[x] + found[y]) < 28123){
				check[(found[x] + found[y])] = 1;
			}
		}
	}
	
	//go through check array and add to sum numbers that are not sum of two abundant numbers
	for(int x = 0; x < 28123; x++){
		if(check[x] != 1)
			sum += x;
	}
		
	
	cout << sum << endl;

}