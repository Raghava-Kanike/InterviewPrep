package prep.arrays;

import java.util.Arrays;

public class DuplicateElementsInArray {

	
	public static void findDuplicates(int[] arr) {
		
		int c=0;
	///	Arrays.sort(arr);
		 System.out.println("Duplicate elements in given array: ");  
	        //Searches for duplicate element  
	        for(int i = 0; i < arr.length; i++) {  
	            for(int j = i + 1; j < arr.length; j++) {  
	                if(arr[i] == arr[j])  
	                    System.out.println(arr[i]);  
	            }
	        }
				
		
		
		
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int []array = {8,2,13,12,8,14,9,13,12,5,14,1,4,6,14,10};
	   findDuplicates(array);
		
	}

}
