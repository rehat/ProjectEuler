/*
Author: Ali Taher

Problem:
Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, 
begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical 
position in the list to obtain a name score.

For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. 
So, COLIN would obtain a score of 938 × 53 = 49714.

What is the total of all the name scores in the file?


Algorithm:
Read file and sort list.  Then go through each name in the list and calculate is worth value and then used that to find the score and add to sum.
*/

import java.util.*; 
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class EulerProblem22{
	
	public static void main(String[] arg) throws IOException{
		String fileName = arg[0];
		BufferedReader reader = new BufferedReader(new FileReader(fileName));
		String line = reader.readLine();
		String tokens[];
		String delimiter = ",";
		tokens = line.split(delimiter);
		ArrayList<String> sorted = new ArrayList<String>(Arrays.asList(tokens));
		Collections.sort(sorted);
		String temp = "";
		int sum = 0;
		int worth = 0;
		String alphabet = "abcdefghijklmnopqrstuvwxyz";
		
		for(int x = 0; x < sorted.size(); x++){
			temp = sorted.get(x).replace("\"", "");  //to get rid of the quotations around the word
			for(int y = 0; y < temp.length(); y++)
				worth += (alphabet.indexOf(temp.toLowerCase().charAt(y)) + 1);			
			
			sum += (x+1) * worth;;
			worth = 0;
		}
		
		System.out.println(sum);
	}
	
}