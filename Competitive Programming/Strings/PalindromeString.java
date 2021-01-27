package prep.sorting.String;

public class PalindromeString {
	
	public boolean isPalindrome(String str) {
		boolean flag=false;
		String rev;
		rev=reverseTheStr(str);
		flag=(str.equals(rev)?true:false);
		
		
		return flag;
	}

	private String reverseTheStr(String str) {
		char ch[]=str.toCharArray();
		int len=str.length();
		str="";
		for(int i=len-1;i>=0;i--)
			 str=str+ch[i];
		return str;
	}

	public static void main(String[] args) {
		String str="racecar";
		PalindromeString ps=new PalindromeString();
		System.out.println(ps.isPalindrome(str)?"is palindrome":"not a palindrome");
		

	}

}
