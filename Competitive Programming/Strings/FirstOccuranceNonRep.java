package prep.String;

import java.util.Arrays;

public class FirstOccuranceNonRep {

	
	//first occurance of non-repetitive charater in given String
	
	
	 public static int nonRepetitive(String str) {
		 
		 char alpha[]=new char[26];
		 
		 for(int i=0;i<str.length();i++) {
			 
			 alpha[str.charAt(i)-94]++;
		 }
		
		 
		 
		 for(int j=0;j<str.length();j++) {
			 if(alpha[str.charAt(j)-94]==1) {
				 return j;
			 }
		 }
		 
		 
		 
		return -1;
		
		
	
		
		 
	
	 }
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		String str="dcccaa";
		int index=nonRepetitive(str);
		System.out.println(index==-1?"No unique chars":"index is "+index+" first occurance of char is "+str.charAt(index));
		
	}

}
