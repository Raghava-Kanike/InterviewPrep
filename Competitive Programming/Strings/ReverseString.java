package prep.sorting.String;

public class ReverseString {

	

	public String reverseStr(String str) {
		char []ch=str.toCharArray();
		int len=str.length();
		String revStr="";
		for(int i=len-1;i>=0;i--) {
			
			revStr+=ch[i];
		}
		return revStr;
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str="I Love Java";
		ReverseString revstr=new ReverseString();
		System.out.println(revstr.reverseStr(str));

	}

}
