package prep.numbers;

public class ArmstrogNumber {

	
	public static boolean isArmstrong(int num) {
		
		int temp=num,rem,sum=0;
		
		while(temp!=0) {
			rem=temp%10;
			temp=temp/10;
			sum+=rem*rem*rem;
			
		}
		if(sum==num)
			return true;
		else
			return false;
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println(isArmstrong(153)?"is armstrong num":"not a armstrong");
		
	}

}
