package prep.sorting.Comparsion;

import java.util.Arrays;

public class QuickSort {

	public  int[] sort(int[] array, int low, int high) {
		// TODO Auto-generated method stub
		if(low<high) {
			int part=partition(array,low,high);
			sort(array,low,part-1);
			sort(array,part+1,high);
			
		}
		return array;
		
		
		
	}
	int partition(int[] array,int low,int high) {
		int pivot=array[low];
		int i=low;
		int j=high;
		while(i<j) {
			
			while(i<=high && array[i]<=pivot)
				i++;
			while(array[j]>pivot)
				j--;
			if(i<j) {
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			
			}
			
		}
		int temp=array[low];
		array[low]=array[j];
		array[j]=temp;

		return j;
		
		
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] array= {10,4,3,8,2,6,9,1,7};
		QuickSort qs=new QuickSort();
		int len=array.length;
		System.out.println(Arrays.toString(qs.sort(array,0,len-1)));
	}

	

}
