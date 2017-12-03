#include<stdio.h>

 void sel_sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        int indexmin=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[indexmin])
                indexmin=j;
        }
        if(indexmin!=i){//swapping elements
            temp=arr[indexmin];
            arr[indexmin]=arr[i];
            arr[i]=temp;
        }
    }

 }

 int main(){
    printf("enter array size:\n");
    int n,i;
    scanf("%d",&n);
    int a[n];
    printf("enter x elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
     //calling selection sort
    sel_sort(a,n);
    printf("output array\n");
     //printing array
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
 }
