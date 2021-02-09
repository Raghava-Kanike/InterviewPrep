package prep.numbers;

import java.util.Arrays;

public class PrimeNumberUptoGivenNum {
	
	public static int[] primeNumbers(int num) {
		int[] arr=new int[num/4];//if we dnt want to fix the size of array then we can use arraylist
		int index=0;
		for(int i=1;i<=num;i++) {
			
			boolean stat=isPrime(i);
			if(stat) {
				arr[index]=i;
				index++;
			
			}
		}
		return arr;
		
	}
	private static boolean isPrime(int i) {
		if(i==1)
			return false;
		for(int j=2;j<Math.sqrt(i);j++) {
				if(i%j==0)
				return false;
			}
		return true;
	}

	public static void main(String[] args) {
		int num=50;
		System.out.println(Arrays.toString(primeNumbers(500)));
		

	}

}
