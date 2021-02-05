package prep.numbers;

public class SwappingInSingleLine {
	public static void swapUsingPlusMinus(int x,int y) {
		System.out.println();
		System.out.println("using + and - to swap in single Line ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x+y-(y=x);
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
	
	}
	public static void swapUsingDivMul(int x,int y) {
		System.out.println();
		System.out.println("using / and * to swap in single Line ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x*y/(y=x);
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
	
	}
	public static void swapUsingXOR(int x,int y) {
		System.out.println();
		System.out.println("using XOR (^) to swap in single Line ");
		System.out.println("====Before swap=====");
		System.out.println("X: "+x+" Y: "+y);
		x=x^y^(y=x);
		System.out.println("====After swap=====");
		System.out.println("X: "+x+" Y: "+y);
		System.out.println();
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		int a=111,b=222;
		swapUsingPlusMinus(a, b);
		swapUsingDivMul(a, b);
		swapUsingXOR(a, b);
	}

}
