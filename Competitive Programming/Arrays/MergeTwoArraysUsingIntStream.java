package prep.arrays;

import java.util.Arrays;
import java.util.stream.IntStream;

public class MergeTwoArraysUsingIntStream {

	
	public static int[] merge(int arr1[],int []arr2) {
		return IntStream.concat(IntStream.of(arr1), IntStream.of(arr2))
				.distinct()
				.sorted()
				.toArray();
	}
	public static void main(String[] args) {
		int arr1[]= { 12, 3, 5, 7, 19 };
		int arr2[]= {1,4,5,6,7,9,3,1,2};
		System.out.println(Arrays.toString(arr1));
		System.out.println(Arrays.toString(arr2));
		System.out.println("merge and sorted: "+Arrays.toString(merge(arr1, arr2)));
		
		
		
			
	}

}
