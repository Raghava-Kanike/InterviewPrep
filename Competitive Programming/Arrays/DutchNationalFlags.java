package prep.arrays;

import java.util.Arrays;

public class DutchNationalFlags {

	
	public void threePartition(int arr[]){
		int end=arr.length-1;
		int start=0;
	   int mid=0;
		int pivot=1;
	
		
		while(mid<=end) {
			
			if(arr[mid]<pivot) {
				swap(arr,start,mid);
				++start;
				++mid;
			}
			else if(arr[mid]>pivot) {
				swap(arr,mid,end);
				--end;
				
			}
			else {
				++mid;
			}
		}
		
		
	}
	private void swap(int[] arr, int i, int j) {
		
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
	}
	public static void main(String[] args) {
		int[] array = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
		DutchNationalFlags dnf=new DutchNationalFlags();
		System.out.println("given arr:"+Arrays.toString(array));
		dnf.threePartition(array);
	   System.out.println("sorted arr:"+Arrays.toString(array));
		
		
	}

}
