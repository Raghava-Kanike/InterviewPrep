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
	public void reverseArraystr(String str) {
		 char arr[]=str.toCharArray();	
		
			if(arr.length<=1 || arr==null) {
				System.out.println("enter a valid array");
			}
			for(int i=0;i<arr.length/2;i++)
			{
						
				char temp=arr[i];
				arr[i]=arr[arr.length-1-i];
				arr[arr.length-1-i]=temp; 
				
			}		
			
			System.out.println(new String(arr));
			
		}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str="I Love Java";
		ReverseString revstr=new ReverseString();
		System.out.println(revstr.reverseStr(str));
		revstr.reverseArraystr(str);
		
	}

}
