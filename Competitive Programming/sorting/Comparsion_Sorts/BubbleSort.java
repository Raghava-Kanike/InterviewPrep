package prep.sorting.Comparsion;

import java.util.Arrays;

public class BubbleSort {
	
	public int[] sort(int[] arr) {
		
		for(int i=0;i<arr.length-1;i++) {
			for(int j=arr.length-1;j>=i+1;j--) {
				if(arr[j]<arr[j-1]) {
					arr[j]=arr[j]^arr[j-1];
					arr[j-1]=arr[j]^arr[j-1];
					arr[j]=arr[j]^arr[j-1];
				}
			}
		}
		
		
		
		
		return arr;
		
	}

	

	public static void main(String[] args) {
		int [] array= {10,4,3,1,6,9,1};
		BubbleSort bs=new BubbleSort();
		System.out.println(Arrays.toString(bs.sort(array)));

	}

	

}
