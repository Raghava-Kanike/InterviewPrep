package prep.String;

public class UppercaseLowercase {
	
	public static String lower(String str) {
		char ch[]=str.toCharArray();
		for(int i=0;i<ch.length;i++) {
			
			ch[i]=(char) (ch[i]+32);
		}
		
		return new String(ch);
		
	}
	public static String upper(String str) {
		char ch[]=str.toCharArray();
		for(int i=0;i<ch.length;i++) {
			
			ch[i]=(char) (ch[i]-32);
		}
		
		return new String(ch);
		
		
	}

	public static void main(String[] args) {
		
			String s1="toupper";
			String s2="TOLOWER";
			
		System.out.println(upper(s1));
		System.out.println(lower(s2));
	}

}
