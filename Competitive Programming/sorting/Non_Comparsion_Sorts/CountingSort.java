package prep.sorting;

import java.util.Arrays;

public class CountingSort {

	
	
	public int[] countingSort(int[] arr) {
		//find max element
		int maxValue=maxElement(arr);
	
		
		//create a countarr with size of maxValue + 1
		int countArr[]=new int[maxValue+1];
		intilaizeCountArr(countArr);
		//count the repeated  and place the count in countArr
		countRepeatedElements(arr,countArr);
		//update the count array to get the range of indices
		updateCountArr(countArr);
		sort(arr,countArr);
		
		return arr;
	}
	
	private void sort(int[] arr, int[] countArr) {
		int b[]=new int[arr.length];
		//start from last to preserve the order
		for(int i=arr.length-1;i>=0;i--) {
			b[--countArr[arr[i]]]=arr[i];
		}
		
		for(int i=0;i<b.length;i++) {
			arr[i]=b[i];
		}
	}

	private void updateCountArr(int[] countArr) {
		for(int i=1;i<countArr.length;i++) {
			countArr[i]+=countArr[i-1];
		}
		
	}

	private void countRepeatedElements(int[] arr, int[] countArr) {
		for(int i=0;i<arr.length;i++) {
			   countArr[arr[i]]++;
		}
	}

	private void intilaizeCountArr(int[] countArr) {
		for(int i=0;i<countArr.length;i++) {
			 countArr[i]=0;
		}
	}

	
	private int maxElement(int[] arr) {
		int max=arr[0];
		for(int i=1;i<arr.length;i++) {
			if(arr[i]>=max)
				max=arr[i];
		}
		return max;
	}

	public static void main(String[] args) {
		int []array = {8,2,13,12,8,14,9,13,12,5,14,1,4,6,14,10};
		CountingSort cs=new CountingSort();
		System.out.println(Arrays.toString(cs.countingSort(array)));
		
	}

}
