package prep.numbers;

public class Swapping {

	public static void swapUsingPlusMinus(int x,int y) {
		System.out.println();
		System.out.println("using + and - to swap ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x+y;
		y=x-y;
		x=x-y;
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
	
	}
	public static void swapUsingDivMul(int x,int y) {
		System.out.println();
		System.out.println("using / and * to swap ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x*y;
		y=x/y;
		x=x/y;
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
	
	}
	public static void swapUsingXOR(int x,int y) {
		System.out.println();
		System.out.println("using XOR (^) to swap ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x^y;
		y=x^y;
		x=x^y;
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a=10,b=20;
		swapUsingPlusMinus(a, b);
		swapUsingDivMul(a, b);
		swapUsingXOR(a, b);

	}

}
