/*
Author: Ali Taher

Problem:
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be
1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28

We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have over five hundred divisors?

Algorithm:
For loop to generate the next triangle number and an inner for loop to check all even divisors
of the triangle number.  Outer for loop ends once the divisorsCounter is equal to 500  

*/

#include <iostream>
using namespace std;

int main(){
	int triangleNumber = 1;
	int divisorsCounter = 1;

	for(int x = 2; divisorsCounter < 500; x++){
		triangleNumber += x;
		divisorsCounter = 0;
		for(int y = 1; y <= triangleNumber; y++){
			if(triangleNumber % y == 0)
				divisorsCounter++;
		}
		cout << triangleNumber << "  "<< divisorsCounter << endl;

	}

	cout << triangleNumber << endl;
}