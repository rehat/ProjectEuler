/*
Author: Ali Taher

Problem:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

Algorithm:
Loop through to find the 10001st prime number 

*/

#include <iostream>
using namespace std;

int main(){
	int prime = 2;
	int counter = 1;
	
	while(counter != 10001){
		prime++;
		for(int x = 2 ; x < prime; x++){
			if(prime%x == 0) //not prime
				break;
			if((x+1) == prime )
				counter++;
		}
	}
	
	cout << prime << endl;
	
}