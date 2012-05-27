/*
Author: Ali Taher

Problem:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.


Algorithm:
Generate all primes from 2 to 2 million and add to sum.

*/



import java.util.*;
import java.math.*;

public class EulerProblem10 {


	public static void main(String[] arg){
		BigInteger sum = new BigInteger("0");
		BigInteger prime = new BigInteger("2");

		while(prime.compareTo(new BigInteger("2000000")) == -1){
			//System.out.println(sum + "    " + prime);

			sum = sum.add(prime);
			prime = genNextPrime(prime);
			
		}

		System.out.println(sum + "    " + prime);

	}

	public static BigInteger genNextPrime(BigInteger old){

		BigInteger next = new BigInteger("0"); 
		old = old.add(BigInteger.ONE);
		boolean found = false;
		BigInteger x = new BigInteger("2");
		
		while(!found  ){

				if(old.mod(x).equals(BigInteger.ZERO)){
					old = old.add(BigInteger.ONE);
					x = new BigInteger("2");
				}
				else
					x = x.add(BigInteger.ONE);
				
				if(x.equals(old)){
					found = true;
					next = old;
				}
		}

		return next;


	}
}