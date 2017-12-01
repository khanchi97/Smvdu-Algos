import java.util.Scanner;

public class MergeSort {
   public static void main(String[] args) {
	Scanner s= new Scanner(System.in);
	int n = s.nextInt();
	int arr[] = new int[n];
	for(int i=0;i<n;i++){
		   arr[i] = s.nextInt(); 
	}
	int res[] = new int[n];
	arrDivide(arr,res,0,arr.length);
	for(int i=0;i<n;i++){
		   System.out.println(arr[i]); 
	}
	s.close();
   }

// In merge sort we first keep on dividing the array in two parts left and right 
// till we get each element separately then we start to merge the elements together
// sorting them and storing them in a separate array.Worst case time complexity for 
// merge sort is nlogn.. 
 
/*     One method for dividing arrays in two parts left and right..   
   	public static int[] arrDivide(int arr[]){
	   int n = arr.length;
	   if(n==0|| n==1){
		   return arr;
	   }
	   int leftArr[]= new int[n/2];
	   int rightArr[]= new int[n-(n/2)];
	   for(int i=0;i<n/2;i++){
		   leftArr[i] = arr[i]; 
	   }
	   for(int i=n/2;i<n;i++){
		   rightArr[i-(n/2)] = arr[i];
	   }
	   leftArr = arrDivide(leftArr);
	   rightArr = arrDivide(rightArr);
	   return mergeArrays(leftArr,rightArr);
   }
 */

/* if we will use divide function by making two separate arrays it will take more time
   time as well as space for making them in each recursion so we will take help of indices
   for dividing the array..
 */
  
  public static void arrDivide(int arr[],int temp[],int left,int right){
	   
	   if(right-left==1 || left==right){
		   return;
	   }
	   
 	   if(left<right){
	   int mid = (left+right)/2;
	   arrDivide(arr,temp,left,mid);
	   arrDivide(arr,temp,mid,right);
	   mergeArrays(arr,temp,left,mid,right);
	   }

   }
   
   public static void mergeArrays(int arr[],int temp[],int left,int mid,int right){
       int i,j,k;
	   i = left; 
	   j=  mid;
	   k = left;
	   while(i!=mid && j!=right){
		   if(arr[i]<=arr[j]){
			 temp[k++] = arr[i++];    
		   }else{
			 temp[k++] = arr[j++];  
		   }
	   }
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
