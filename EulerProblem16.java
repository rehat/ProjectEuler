/*
Author: Ali Taher

Problem:
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?


Algorithm:
Compute the value of 2^1000 using BigInteger then convert to string.  For loop through each character and add to sum.

*/


import java.util.*;
import java.math.*;

public class EulerProblem16{

	public static void main(String[] arg){
		String result = "";
		BigInteger base = new BigInteger("2");
		int sum = 0;

		result = base.pow(1000).toString();
		for(int x = 0; x < result.length(); x++){
			switch(result.charAt(x)){
				case '1':
				sum += 1;
				break;
				case '2':
				sum += 2;
				break;
				case '3':
				sum += 3;
				break;
				case '4':
				sum += 4;
				break;
				case '5':
				sum += 5;
				break;
				case '6':
				sum += 6;
				break;
				case '7':
				sum += 7;
				break;
				case '8':
				sum += 8;
				break;
				case '9':
				sum += 9;
				break;
				default:
				break;
			}
		}

		System.out.println(sum);
	}
}