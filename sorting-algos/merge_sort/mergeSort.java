import java.util.Scanner;

public class MergeSort {
   public static void main(String[] args) {
		Scanner s= new Scanner(System.in);
		System.out.print("Please enter the size of array to be sorted : \n");
		int n = s.nextInt();
		int arr[] = new int[n];
		for(int i=1;i<=n;i++){
			   System.out.print("Enter the "+ i + " element : " );	
			   arr[i-1] = s.nextInt();
		}
		int res[] = new int[n];
		arrDivide(arr,res,0,arr.length);
		System.out.println("Sorted Array is : ");
		for(int i=0;i<n;i++){
			   System.out.print(arr[i] + " "); 
		}
		s.close();
   }

/* In merge sort we first keep on dividing the array in two parts left and right 
   till we get each element separately then we start to merge the elements together
   sorting them and storing them in a separate array.
   Worst case time complexity for merge sort is nlogn.. 
*/
  
  public static void arrDivide(int arr[],int temp[],int left,int right){
	   
	   if(right-left==1 || left==right){     // when array length is 1 or 0 
		   return;			 // it is already sorted..	
	   }											
	   
 	   if(left<right){				
	   int mid = (left+right)/2;		 // dividing array into two parts using indices.
	   arrDivide(arr,temp,left,mid);	 // sorting first half.	
	   arrDivide(arr,temp,mid,right);	 // sorting other half.
	   mergeArrays(arr,temp,left,mid,right); // merging the two sorted halves. 
	   }

   }
   
   public static void mergeArrays(int arr[],int temp[],int left,int mid,int right){
      	   int i,j,k;
	   i = left; 
	   j=  mid;
	   k = left;
		
	   // merging the two divisions (left & right) in sorted order
	   // and storing in temp array.	
	   while(i!=mid && j!=right){		
		   if(arr[i]<=arr[j]){
			 temp[k++] = arr[i++];    
		   }else{
			 temp[k++] = arr[j++];  
		   }
	   }

	   // add the remaining elements.	
	   while(i!=mid){			
		   temp[k++] = arr[i++];
	   }
	   while(j!=right){
		   temp[k++] = arr[j++];
	   }
	   
	   for(i=left;i<right;i++){
		   arr[i] = temp[i];
	   }  
   }

}

/* Example:
INPUT: 
Please enter the size of array to be sorted : 
8
Enter the 1 element : 55
Enter the 2 element : 7
Enter the 3 element : 2
Enter the 4 element : 13
Enter the 5 element : 1
Enter the 6 element : 23
Enter the 7 element : 14
Enter the 8 element : 54

OUTPUT: 
Sorted Array is : 
1 2 7 13 14 23 54 55 
*/ 
