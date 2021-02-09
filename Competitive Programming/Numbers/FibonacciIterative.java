package prep.numbers;

public class FibonacciIterative {

	
	
	static int fibonacci(int num) {
		int a=0,b=1,c;
		if(num==0)
			return a;
		for(int i=1;i<=num;i++) {
			c=a+b;
			a=b;
			b=c;
			
		}
		return b;
		
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		System.out.println(fibonacci(5));
	}

}
