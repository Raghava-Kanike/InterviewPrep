package prep.arrays;

import java.util.Arrays;

public class ReverseArray {

	
	public int[] reverseArray(int[] arr) {
		
		if(arr.length<=1 || arr==null) {
			System.out.println("enter a valid array");
		}
		for(int i=0;i<arr.length/2;i++)
		{
					
			int temp=arr[i];
			arr[i]=arr[arr.length-1-i];
			arr[arr.length-1-i]=temp; 
			
		}		
		
		return arr;
		
	}
	
	
	public static void main(String[] args) {
		int[] array = {1,2,3,4,5,6,7,8};
		ReverseArray r=new ReverseArray();
		System.out.println(Arrays.toString(r.reverseArray(array)));
	}

}
