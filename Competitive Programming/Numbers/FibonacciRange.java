package prep.numbers;

import java.util.Arrays;

public class FibonacciRange {

	static int [] fibonacciRange(int num) {
		int f[]=new int[num+2];//handeling the case for n=0
		
		f[0]=0;
		f[1]=1;
		for(int i=2;i<=num;i++) {
			f[i]=f[i-1]+f[i-2];
			
		}
		return f;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num=30;
		//System.out.println(Arrays.toString(fibonacciRange(num)));
		int a[]=fibonacciRange(num);
		for(int i=0;i<a.length-1;i++) {
			System.out.print(a[i]+"  ");
		}

	}

}
