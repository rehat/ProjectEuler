/*
Author: Ali Taher

Problem:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Algorithm:
Three loops to generate all possible values of a,b,c that meet a+b+c=1000 and 
a^2 + b^2 = c^2
*/


#include <iostream>
using namespace std;

int main(){
	int a = 1;
	int b = 1;
	int c = 1;
		
	for(;a < 1000; a++){
		for(b = a; b < 1000; b++){
			for(c = b; c < 1000; c++){
				if( ( (a*a)+(b*b)) == (c*c) && (a+b+c) == 1000){
					cout << a << " " << b << " " << c << endl;
					cout << (a*b*c) << endl;
					return 0; 
				}
			}
		}	
	}	
}