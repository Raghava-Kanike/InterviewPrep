package prep.sorting.String;

import java.util.Arrays;

public class Removeduplicates {

	public String removeDup(String str) {
		String res="";
		char[] ch=str.toCharArray();
		int len=str.length();
		char[] sortedCh=sortChar(ch,len);
		ch=remDup(sortedCh);
	   	return new String(ch);
	}
	

	private char[] remDup(char[] sortedCh) {
		int i=0;
		int out=0;
		char res[] = new char[sortedCh.length];
		while(i<sortedCh.length-1) {
			int j=i+1;
			if(sortedCh[i] != sortedCh[j]) {
				res[out]=sortedCh[i];
				out++;
				}
				i++;
			
		}
		return res;
	}


	private char[] sortChar(char[] ch, int len) {
		
		for(int i=0;i<len-1;i++) {
			for(int j=len-1;j>=i+1;j--) {
				
				if(ch[j]<ch[j-1]) {
					char temp=ch[j];
					ch[j]=ch[j-1];
					ch[j-1]=temp;
				}
			}
		}
				
		
		return ch;
		
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
      String str="dcaasab";
     
      Removeduplicates rd=new Removeduplicates();
      System.out.println("input str: "+str);
     System.out.println("output str: "+rd.removeDup(str));
	}

	

}
