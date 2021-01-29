package prep.String;

public class Anagram {

	public static boolean isAnagram(String s1,String s2) {
		boolean status=false;
		if(s1.length() != s2.length())
			return status;
		s1=sort(s1);
		s2=sort(s2);
		if(s1.equals(s2))
			return status=true;
		
		
		return status;
		
		
	}
	private static String sort(String s1) {
		
		char ch[]=s1.toCharArray();
		int len=s1.length();
		for(int i=0;i<len-1;i++) {
			for(int j=len-1;j>=i+1;j--) {
				if(ch[j]<ch[j-1]) {
					char temp=ch[j];
					ch[j]=ch[j-1];
					ch[j-1]=temp;
				}
			}
		}
		
		return new String(ch);
	}
	public static void main(String[] args) {
	
		String s1="listen";
		String s2="silent";
		if(isAnagram(s1,s2)) {
		
			System.out.println("both are anagrams");
		}
		else {
			System.out.println("Not a anagram");
		}
		

	}

}
