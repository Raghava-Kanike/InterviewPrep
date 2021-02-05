package prep.numbers;

public class Palindrome {
	
	public static boolean isPalindrome(int num) {
		
		int temp=num,rem,sum=0;
		while(temp!=0) {
			rem=temp%10;
			sum=(sum*10)+rem;
			temp=temp/10;
		
		}
		if(num==sum)
			return true;
		else
			return false;
	}

	public static void main(String[] args) {
		
		System.out.println(isPalindrome(121)?"is palindrome":"not a palindrome");
		

	}

}
