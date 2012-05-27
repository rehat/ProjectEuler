/*
Author: Ali Taher

Problem:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Algorithm:
Loop through 1 -> 999 and checking if the counter can be divided evenly by 3 or 5
and then added it to the sum.

*/
#include <iostream>
using namespace std;

int main(){
	int counter = 1;
	int sum = 0;
	while(counter < 1000){
		if(counter % 3 == 0)
			sum+=counter;
		else if(counter % 5 == 0)
			sum+=counter;
		counter++;
	}
	
	cout << sum << endl;
}