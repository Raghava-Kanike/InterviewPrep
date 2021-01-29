package prep.String;

public class StringContainsOnlyInt {

	
	public static boolean hasInts(String str) {
		boolean status=false;
		char ch[]=str.toCharArray();
		int i=0;
		while(i<str.length()) {
			if(ch[i]>='0' && ch[i]<='9') {
				i++;
			}
			else {
			  return status;	
			}
		}
		
		
		
		return status=true;
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s1="1234";
		String  s2="qq234";
		System.out.println(hasInts(s1)?"contains only integers":"contains ints and chars");
		System.out.println(hasInts(s2)?"contains only integers":"contains ints and chars");

	}

}
