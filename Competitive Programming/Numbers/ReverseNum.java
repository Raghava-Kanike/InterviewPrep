package prep.numbers;

public class ReverseNum {

	static int sum=0,rem;
	public static int reverseNum(int num) {
		if(num==0)
			return sum;
		else {
			rem=num%10;
			sum=(sum*10)+rem;
			reverseNum(num/10);
		}
		return sum;
		
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n1=1234;
		int n2=reverseNum(n1);
		System.out.println("give num: "+n1+" reversed num: "+n2);

	}

}
