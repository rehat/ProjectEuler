/*
Author: Ali Taher

Problem:
If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters. 
The use of "and" when writing out numbers is in compliance with British usage.


Algorithm:
Create two arrays with the words 1-19 and another with the "ty" words from 20 to 90.  
While loop counter is used to access the index of each of these arrays based on its value.  
The counter is broken down using mod and division to access the correct index.  Concatenate each
word used to write out the counter value and then used it's length to sum the number of letters needed.

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	int counter = 1;
	int sum = 0;
	string oneTo19[] = {"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string twentyToNinety[] = {" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	string hundred = "hundred";
	string temp = "";
	int countBreakDown = 0;

	while(counter != 1000){
		if(counter >= 100){
			temp += oneTo19[(counter/100)];
			temp += hundred;
			countBreakDown = counter % ((counter / 100)*100);
			if(countBreakDown != 0){
				temp += "and";
			}
		}
		else
			countBreakDown = counter;

		if(countBreakDown != 0){
			if(countBreakDown < 20)
				temp += oneTo19[countBreakDown];
			else{
				temp += twentyToNinety[countBreakDown/10];
				temp += oneTo19[countBreakDown % ((countBreakDown/10)*10)];
			}
		}

		cout << temp << endl;

		sum += temp.length();
		temp = "";
		counter++;

	}
	temp += oneTo19[1];
	temp += "thousand";
	sum += temp.length();

	cout << sum << endl;

}