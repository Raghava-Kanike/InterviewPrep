package prep.arrays;

import java.util.Arrays;

public class CyclicallyRotateByOne {

	public static int[] rotate(int [] arr) {
		int x=arr[arr.length-1];
		for(int i=arr.length-1;i>0;i--) {
			arr[i]=arr[i-1];
		}
		arr[0]=x;
		
		return arr;
	}
	public static void main(String[] args) {
		int[] array = {1,2,3,4,5,6,7,8};
		System.out.println("Given array: "+Arrays.toString(array));
		array=rotate(array);
		System.out.println("rotated by one :"+Arrays.toString(array));
	

	}

}
