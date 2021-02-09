package prep.numbers;

public class FibonacciRecursive {

	static 	int fibonacciNum(int n) {
		if(n<=1)
			return n;
		return fibonacciNum(n-1)+fibonacciNum(n-2);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(fibonacciNum(1));

	}

}
