/*
Author: Ali Taher

Problem:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Algorithm:
Two loops to generate all products of two 3-digit numbers, each product result is converter to string to check
if the first char and last char match using a for loop. Each iteration of the for loop shrinks the substring and if it reaches 
the middle we have found a palindrome.  Then check it against the largest palindrome found so far.

*/

public class EulerProblem4{

	public static void main(String[] arg){
		int numberOne = 100;
		int numberTwo = 100;
		Integer product = 0;
		Integer lastPalin = 0;
		String check = "";


		while(numberOne < 1000){

			while(numberTwo < 1000){
				product = numberOne * numberTwo;
				numberTwo++;
				check = product.toString();
				int mid = (check.length() /2) + 1;
				for(int x = 0; x < check.length()-1; x++){  
					if(check.charAt(x) != check.charAt(check.length() - (x+1))){
						break;
					}	
					else if(mid+x == check.length()){
						if(product > lastPalin)
							lastPalin = product;
					}
				}

			}

			numberTwo = 100;
			numberOne++;	

		}
		System.out.println(lastPalin);
		
	}
}