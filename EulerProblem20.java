/*
Author: Ali Taher

Problem:
n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!


Algorithm:
Compute the value of 100! using BigInteger variable.  Then convert the result to a string and iterate 
through each character and add the int value to sum.

*/

import java.util.*;
import java.math.*;

public class EulerProblem20{

	public static void main(String[] arg){
		String result = "";
		BigInteger factorial = new BigInteger("100");
		int sum = 0;
	
		for(Integer y = 99; y > 0; y--){
			factorial = factorial.multiply(new BigInteger(y.toString()));
		}
		
		result = factorial.toString();
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