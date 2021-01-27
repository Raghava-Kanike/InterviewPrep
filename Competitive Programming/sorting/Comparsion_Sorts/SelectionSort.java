package prep.sorting.Comparsion;

import java.util.Arrays;

public class SelectionSort {
	
	public int [] sort(int[] arr) {
		for(int i=0;i<arr.length-1;i++) {
			int minIndex=i+1;
			for(int j=i+1;j<arr.length;j++) {
				
				if(arr[j]<arr[minIndex])
					minIndex=j;
			}
			if(arr[i]>arr[minIndex]) {
				arr[i]=arr[i]^arr[minIndex];
				arr[minIndex]=arr[i]^arr[minIndex];
				arr[i]=arr[i]^arr[minIndex];
			}
			
		}
		
		
		
		return arr;
	}
	public static void main(String[] args) {
		int [] array= {10,4,3,8,2,6,9,1,7};
		SelectionSort ss=new SelectionSort();
		System.out.println(Arrays.toString(ss.sort(array)));
	}
}
