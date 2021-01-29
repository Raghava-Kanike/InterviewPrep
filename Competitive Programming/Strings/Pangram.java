package prep.String;

import java.util.Arrays;

public class Pangram {
//A-Z atleast once in given sentence
//remove spacings and convert it to upper/lower
//create a char array of length 26 and increment the count on encountering the char and
	//place at the correct index
	
	
	public static boolean isPangram(String str) {
		boolean status=false;
		str=str.replace(" ","");
		str=str.toUpperCase();
		char alpha[]=new char[26];
		char ch[]=str.toCharArray();
		
		for(int i=0;i<str.length();i++) {
			  
			alpha[ch[i]-65]=1;
		
		}
		
		for(int i=0;i<alpha.length;i++) {
			System.out.print((int)alpha[i]+ " ");			
		}
			
		for(int i=0;i<alpha.length;i++) {
			if(alpha[i]==1)
				continue;
			else
				return status;
				
		}
			
		
		return status=true;
	}
	public static void main(String[] args) {
		String str="The quick brown fox jumps over a lazy dog";
		String s2="is this a pangram";
		if(isPangram(str)) {
		 System.out.println("is pangram");
		 
		}
		else {
			System.out.println("not a pangram");
		}

	}

}
