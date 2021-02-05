package prep.numbers;

public class PowerOfTwo {

	
	public static boolean isPowerOf2(int num) {
		
		if(num==1)
			return true;
		else
			if(num%2!=0 || num==0)
				return false;
		return isPowerOf2(num/2);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println(isPowerOf2(128)?"power of 2":"not a power of 2");
	}

}
