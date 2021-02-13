package prep.sorting.Comparsion;

import java.util.Arrays;

public class HeapSort {
	
	
	int[] sort(int array[]) {
		int len=array.length;
		
		for(int i=len/2-1;i>=0;i--)
			heapify(array,len,i);
		
		for(int i=len-1;i>0;i--) {
			int temp=array[0];
			array[0]=array[i];
			array[i]=temp;
			
			heapify(array,i, 0);
			
			
		}
		return array;
		
		
	}

	private void heapify(int[] array, int len, int i) {
		// TODO Auto-generated method stub
		int largest=i;
		int left=2*i+1;
		int right=2*i+2;
		
		
		if(left<len && array[left]>array[largest])
				largest=left;
		if(right<len && array[right]>array[largest])
			 	largest=right;
		
		if(i!=largest) {
			int swap=array[i];
			array[i]=array[largest];
			array[largest]=swap;
			
			heapify(array, len, largest);
			
		}
		
		
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] array= {10,4,3,8,2,6,9,1,7};
		HeapSort hs=new HeapSort();
		System.out.println(Arrays.toString(array));
		System.out.println(Arrays.toString(hs.sort(array)));

	}

}
