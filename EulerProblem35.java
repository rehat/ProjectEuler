/*
Author: Ali Taher

Problem:
The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

How many circular primes are there below one million?


Algorithm:
Starting from prime 97, Outer loop through all primes from 97 to below one million.  Inner loop convert prime number to string
and generate all circlular versions for the number and check if they are prime. If all are prime increment found counter. 

*/

import java.util.*;

public class EulerProblem35{

	public static void main(String[] arg){
		ArrayList<Integer> primeList = new ArrayList<Integer>();
		Integer lastPrime = 97;
		String check = "";
		int found = 13;

		primeList.add(lastPrime);
		while(lastPrime < 1000000){
			lastPrime = nextPrime(lastPrime);
			check = lastPrime.toString();
			for(int x = 0; x < (check.length()-1);x++){
				
				check = check.substring(1,check.length()) + check.substring(0,1);
				if(!primeCheck(Integer.parseInt(check)))
					break;	
				if(primeCheck(Integer.parseInt(check)) && (x+1) == (check.length()-1))
					found++;
			}
		}
		System.out.println(found);
		
	}

	public static Integer nextPrime(Integer y){
		Integer last = y;
		boolean found = false;
		while(!found){
			last++;
			for(int x = 2; x < last; x++){
				if(last % x == 0)
					break;
				if((x+1) == last )
					found = true;
			}
		}
		return last;
	}

	public static boolean primeCheck(Integer y){
		for(int x = 2; x < y; x++){
			if(y % x == 0)
				return false;
		}
		return true;
	}

}
