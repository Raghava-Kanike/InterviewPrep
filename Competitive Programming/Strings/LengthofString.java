package prep.String;

public class LengthofString {

	
	public static int findLenght(String str) {
		int len=0;
		str=str+'\0';
		char ch[]=str.toCharArray();
		int i=0;
		while(ch[i]!='\0') {
			len++;
			i++;
		}
		return len;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String sq="Whats is lenght";
		System.out.println(findLenght(sq));

	}

}
