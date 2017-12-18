import java.util.Scanner;
import java.util.Arrays;

public class binarysearch {

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.print("enter the size of the array : ");
		int size= s.nextInt();
		int input[]=new int[size];
		// taking inputs for array
		for(int i=0;i<size;i++)
		{   System.out.print("enter element "+ (i+1) +" : "); 
			input[i]= s.nextInt();
		}  

		System.out.print("Enter element to be searched : ");
		int element= s.nextInt();
		
		//for binary search the array must be sorted ..
		// using the inbuilt java library for sorting the array fast.
		Arrays.sort(input);         
		
		//finding result using iterative method
		int resIterative=binarySearchIterative(input,element);
		System.out.println("Index from iterative binarySearch : "+resIterative);
		
		//finding result using recursive method
		int resRecursive=binarySearchRecursive(input,element,0,size); 
		System.out.println("Index from recursive binarySearch : "+resRecursive);
		System.out.println("in Sorted Input array-->>");
		for(int i=0;i<size;i++)
		{   System.out.print(input[i]+ " "); 
		}
		s.close();
	}

	public static int binarySearchIterative(int[] arr,int X) {
		int index;
		int start=0,end=arr.length-1;
		int mid;
		
		while(start<=end)			// if start>end then it means that our search is finished and element not found
		{   mid=(start+end)/2;
			
			if(arr[mid]==X)
			{ 	index=mid;			// if element is found we will return index
				return index+1;
			}						// array is sorted in increasing order so if
			else if(X<arr[mid]){ 	// the element is lesser than element at mid
				end=mid-1;			// that means it is present in first half
			}else{					// else it is in second half
				start =mid+1;
			}
		}
		return -1;					// if element not found at last
	}

	public static int binarySearchRecursive(int arr[],int element,int start,int end){
		
		if(start>end)				// if search finished and element not found
			return -1;
		int mid= (start + end)/2;  // defining the mid index each time when function is called.
		if(arr[mid] == element){   // if element found
			return mid+1;
		}else if(arr[mid]<element){		// if element greater than element at mid 
		   start = mid+1;				// shift start to second half
		   								// search in second half and return what comes..
		   return binarySearchRecursive(arr, element,start,end);    
		}else{							// if element smaller than element at mid 
		   end = mid-1;					// shift start to first half	
		   								// search in first half and return what comes..
		   return binarySearchRecursive(arr, element,start,end);
		}
	}
}
/* INPUT:
   enter the size of the array : 5
   enter element 1 : 1
   enter element 2 : 2
   enter element 3 : 3
   enter element 4 : 4
   enter element 5 : 5
   Enter element to be searched : 4
   
   OUTPUT:
   Index from iterative binarySearch : 3
   Index from recursive binarySearch : 3
 */
