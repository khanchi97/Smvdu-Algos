import java.util.Scanner;

public class LIS{
	/* In this problem we have to find length of longest increasing subsequence such that
	 * all elements of a subsequence are sorted in increasing order.
	 * for example : {40, 10, 20, 15, 50, 80} LIS is 4
	 *               i.e {10,20,50,80}
	 */
	public static void main(String[] args) {
		Scanner s= new Scanner(System.in);
		
		System.out.println("Please enter the size of array");
		int n= s.nextInt();
		// declaring n sized array..
		int arr[] = new int[n];
		// taking array input..
		for(int i=1;i<=n;i++){
			System.out.println("Please enter element "+i +":");
			arr[i-1]= s.nextInt();		
		}
		// lenLongestIncSubs() will return length of increasing subsequence..
		System.out.println(lenLongestIncSubs(arr,n));
		s.close();
	}

	public static int lenLongestIncSubs(int[] arr, int n) {
		int dp[] = new int[n];		// this will store the result for each array index
									// i.e. length of inc subseq. till that index considering it the last element of array...
		int max = 1;				
		for(int i=0;i<n;i++){
		   // initializing all elements result with 1 considering a single element is always in inc seq.
		   dp[i] =1;
		   
		   /* here we will have to go to each element before the current one
		    *to check if it is smaller than current one.. and if it is 
		    *then we will add its result to the current one..
		    *and we will keep on checking further and in last result at ith index
		    *will be updated with max len of inc subs. till itself..
		    */
		   for(int j=0;j<i;j++){
			   // checking if jth element is smaller than ith so as to form inc subs.
				if(arr[j]<arr[i]){
					// we will only update the res when new res is greater than previous..
					if(dp[i]<dp[j]+1){
						dp[i] = dp[j]+1;
					}
					// updating our max if it becomes less than current result at ith element...
					if(max<dp[i])
						max = dp[i];
				}
			}
		}
		return max;
	}

}
