package prep.arrays;

import java.util.Arrays;

public class KthSmallestOrLargestElement {

	private int [] sortArrayAsc(int arr[]) {
		 
			for(int i=0;i<arr.length-1;i++) {
					for(int j=arr.length-1;j>=i+1;j--) {
						
							if(arr[j]<arr[j-1]) {
								
								int temp=arr[j];
								arr[j]=arr[j-1];
								arr[j-1]=temp;
							}
					}
			}
		
		
		
		return arr;
		
	}
	private int [] sortArrayDes(int arr[]) {
		 
		for(int i=0;i<arr.length-1;i++) {
				for(int j=arr.length-1;j>=i+1;j--) {
					
						if(arr[j] > arr[j-1]) {
							
							int temp=arr[j];
							arr[j]=arr[j-1];
							arr[j-1]=temp;
						}
				}
		}
		
	
	
	
	return arr;
	
}
	public int kthSmallest(int [] arr,int k) {
		
		arr=sortArrayAsc(arr);
		System.out.println(Arrays.toString(arr));
			
		return arr[k-1];
		
	}
public int kthLargest(int [] arr,int k) {
		
		sortArrayDes(arr);
		System.out.println(Arrays.toString(arr));
			
		return arr[k-1];
		
	}

	

	
	
	
	
	public static void main(String[] args) {
		int[] array= { 12, 3, 5, 7, 19 };
		KthSmallestOrLargestElement ksl=new KthSmallestOrLargestElement();
		int k=2;//k should always less than the array length
		System.out.println("kth smallest element key"+k+" is: "+ksl.kthSmallest(array, k));
		System.out.println("kth largest element key"+k+" is: "+ksl.kthLargest(array, k));
		
		
	}
	

}



