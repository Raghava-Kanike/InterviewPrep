package prep.String;

import java.util.Arrays;

public class CountVowelsConsonantsSplChars {

	
	public static void countChar(String str) {
		int vcnt=0;
		int ccnt=0;
		int splcnt=0;
		int dcnt=0;
		
		str=str.replace(" ","");
		
		char ch[]=str.toCharArray();
		System.out.println(Arrays.toString(ch));
		for(int i=0;i<ch.length;i++) {
			
			if(ch[i]>='A' && ch[i]<='Z' || ch[i]>='a' && ch[i]<='b') {
				if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'
					|| ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U') {
					vcnt++;
				}
				else {
					ccnt++;
				}
			}
			else if(ch[i]>='0' && ch[i]<='9') {
				dcnt++;
			}
			else {
				splcnt++;
			}
		}
for(int i=0;i<ch.length;i++) {
			
			if(ch[i]>='A' && ch[i]<='Z' || ch[i]>='a' && ch[i]<='z') {
				if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u'
					|| ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U') {
					vcnt++;
				}
				else {
					ccnt++;
				}
			}
			else if(ch[i]>='0' && ch[i]<='9') {
				dcnt++;
			}
			else {
				splcnt++;
			}
		}
		
		System.out.println("Given string: "+str);
		System.out.println("no .of vowles: "+vcnt);
		System.out.println("no .of consonats: "+ccnt);
		System.out.println("no .of digits: "+dcnt);
		System.out.println("no .of spl charaters: "+splcnt);
	}
	public static void main(String[] args) {
	
		String s1="hi agent47, How are you?";
		String s2="bce";
		countChar(s1);
	}

}
