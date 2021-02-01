package prep.arrays;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class MergeTwoArraysUsingHashSet {

	public static void main(String[] args) {
		int arr1[]= { 12, 3, 5, 7, 19 };
		int arr2[]= {1,4,5,6,7,9,3,1,2};
		System.out.println(Arrays.toString(arr1));
		System.out.println(Arrays.toString(arr2));
		int i=0,j=0,k=0;
		int outArray[]=new int[arr1.length+arr2.length];
		while(i<arr1.length) {
			outArray[k]=arr1[i];
			++i;
			++k;
		}
		while(j<arr2.length) {
			outArray[k]=arr2[j];
			++j;
			++k;
		}
		
		Set<Integer> outArraywithoutDup=new HashSet<>();
		
		for(int m=0;m<outArray.length;m++) {
			outArraywithoutDup.add(outArray[m]);
		}
		Iterator<Integer> it=outArraywithoutDup.iterator();
		outArray=new int[outArraywithoutDup.size()];
		int l=0;
		while(it.hasNext()) {
			outArray[l]=it.next();
			l++;
		}
			
	Arrays.sort(outArray);
	System.out.println(Arrays.toString(outArray));
	

	}

}
