package prep.arrays;

public class MinMaxInArray {

	
	public int findMax(int arr[]) {
		int max=arr[0];
		
		for(int i=1;i<arr.length;i++) {
			if(arr[i]>max)
				max=arr[i];
		}
		return max;
		
	}
public int findMin(int arr[]) {
	
	int min=arr[0];
	for(int i=1;i<arr.length;i++) {
		if(arr[i]<min)
			min=arr[i];
	}
	
	return min;
		
	}

	public static void main(String[] args) {
		int[] array = {1,2,3,4,5,6,7,8};
		MinMaxInArray minMax=new MinMaxInArray();
		System.out.println("max element "+minMax.findMax(array));
		System.out.println("min element "+minMax.findMin(array));

	}

}
