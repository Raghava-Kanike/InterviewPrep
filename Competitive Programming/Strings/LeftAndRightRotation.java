package prep.sorting.String;

public class LeftAndRightRotation {
	
	public static String leftRotation(String str,int d){
		// d<lenght of str
		
		return str.substring(d)+str.substring(0,d);
		
	}
public static String rightRotation(String str,int d){
		
		
		return leftRotation(str, str.length()-d);
		
	}


	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String str="Roatational";
		int d=3;
		System.out.println(leftRotation(str, d));
		System.out.println(rightRotation(str, d));
		
	}

}
