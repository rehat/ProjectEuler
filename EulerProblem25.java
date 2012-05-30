/*
Author: Ali Taher

Problem:
The Fibonacci sequence is defined by the recurrence relation:
    Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.
Hence the first 12 terms will be:

    F1 = 1
    F2 = 1
    F3 = 2
    F4 = 3
    F5 = 5
    F6 = 8
    F7 = 13
    F8 = 21
    F9 = 34
    F10 = 55
    F11 = 89
    F12 = 144

The 12th term, F12, is the first term to contain three digits.
What is the first term in the Fibonacci sequence to contain 1000 digits?


Algorithm:
While loop that keeps generating the next fibonacci sequence, converts it to string and checks
the length of the string to see if it has 1000 digits.
*/

import java.util.*;
import java.math.*;

public class EulerProblem25{
	
	public static void main(String[] arg){
		BigInteger fib1 = new BigInteger("1");
		BigInteger fib2 = new BigInteger("1");
		BigInteger term = new BigInteger("0");
		String check = "";
		int sequence = 2;
		boolean found = false;
		
		while(!found){
			term = fib1.add(fib2);
			fib1 = fib2;
			fib2 = term;
			check = term.toString();
			if(check.length() == 1000)
				found = true;
			
			sequence++;
			check = "";
		}
		
		System.out.println(sequence);
		
	}
	
}