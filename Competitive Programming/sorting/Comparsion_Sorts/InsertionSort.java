package prep.sorting.Comparsion;

import java.util.Arrays;

public class InsertionSort {

		
	public int [] sort(int []arr) {
		
		
		for(int i=1;i<arr.length;i++) {
			int temp=arr[i];
			int j=i-1;
			while(j>=0 && arr[j]>temp) 
			{
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=temp;
		}
		
			
		
		
		return arr;
		
	}
	public static void main(String[] args) {
		int [] array= {10,4,3,8,2,6,9,1,7};
		InsertionSort is=new InsertionSort();
		System.out.println(Arrays.toString(is.sort(array)));
	}

}
