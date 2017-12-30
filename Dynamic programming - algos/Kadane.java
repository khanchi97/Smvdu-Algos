import java.util.Scanner;

public class KadaneAlgo {
	/* Kadane's algo is used to find maximum sum of subarray.
	 * here we keep track of all positive segments in array using current sum 
	 * and we store the best positive segment sum in bestSoFar variable..
	 * 
	 *  Naive way of doing this i.e. finding all the subarrays first and then finding sum of all
	 *  and then finding best out of it will take O(n^2) time and that is completely not accepted 
	 *  when we can do the same thing in O(n) using kadane algo.
	 *   IN {-2,-3,4,-1,-2,1,5,-10} this example
	 *   answer is {4,-1,-2,1,5) i.e. 7 .
	 *   
	 *   Example :
	 *   INPUT: 
	 *   Enter the size of array
	 *	 8
	 *	Enter the element 1:
	 *	-2
	 *	Enter the element 2:	
	 *	-3
	 *	Enter the element 3:
	 *	4
	 *	Enter the element 4:
	 *	-1
	 *	Enter the element 5:
	 *	-2
	 *	Enter the element 6:	
	 *	5
	 *	Enter the element 7:
	 *	1
	 *	Enter the element 8:
	 *	-10
	 * 
	 * OUTPUT:
	 *  7
	 */
	public static void main(String[] args) {
		Scanner s= new Scanner(System.in);
		System.out.println("Enter the size of array");
		int n = s.nextInt();
		int arr[] = new int[n];
		for(int i=1;i<=n;i++){
			System.out.println("Enter the element " + i + ":");	
			arr[i-1] = s.nextInt();
		}	
		System.out.println(kadane(arr));
		s.close();
	}

	public static int kadane(int arr[]){
		int n= arr.length;
		int currentMaxEnding = 0;
		// assigning best sum minimum value so that it can be 
		// updated with any current max ending sum for the first time.
		int bestSoFar =Integer.MIN_VALUE;
		for(int i=0;i<n;i++){
			// adding array elements to the currentMax ending sum..
			currentMaxEnding+= arr[i];

			// if current max ending gets greater than best sum we will update our best..
			if(bestSoFar<currentMaxEnding)
				bestSoFar = currentMaxEnding;

			// if current sum has become -ve don't take that baggage
			// for the next one.So we will make it 0.  
			if(currentMaxEnding<0){
				currentMaxEnding = 0;
			}
		}


		return bestSoFar;
	}

}
