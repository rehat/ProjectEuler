/*
Author: Ali Taher

Problem:
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.


Algorithm:
Outer loop checks all starting numbers from under one million to 13.  Inner loop runs the rules for 
even/odd numbers and keeps track of the chain count.  Then compare the count with current longest.
*/

#include <iostream>
using namespace std;


int main(){
	int chainCount = 0;
	int bestChain = 0;
	int winner = 0;
	int startNumb = 999999;
	unsigned int temp = 0;
	
	while(startNumb != 13){
		temp = startNumb;
		chainCount = 0;
		while(temp != 1){
			if(temp % 2 == 0){
				temp = temp/2;
			}
			else{
				temp = (3*temp) + 1; 
			}
			chainCount++;
			cout << temp << endl;
		}
		if(chainCount > bestChain){
			winner = startNumb;
			bestChain = chainCount;
		}
		startNumb--;
		cout << startNumb << endl;
	}
	cout << winner << endl;
}