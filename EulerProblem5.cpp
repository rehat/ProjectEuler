/*
Author: Ali Taher

Problem:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


Algorithm:
Loop through 20+ numbers until the inner for loop iterates through 1 to 20 which means smallest (counter) 
can be divided evenly by all numbers from 1 to 20.

*/

#include <iostream>
using namespace std;

int main(){
	int smallest = 20;
	bool found = false;
	
	while(!found){
		for(int x = 1; x <= 20; x++ ){
			if(smallest % x != 0){
				smallest++;
				break;
			}
			if(x == 20)
				found = true;
		}
		
	}
	
	cout << smallest << endl;
	
}