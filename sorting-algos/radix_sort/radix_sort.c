//Radix Sort Algorithm  ||  Time Complexity - O(n*log(n))
#include<stdio.h>
void countsort( int arr[], int length, int exp );
void radixsort( int arr[], int length );
void main()
{
    int i,n,a[10000];
    printf("Total Elements : ");
    scanf("%d",&n);
    for ( i=0; i<n; i++ )
    {
        printf("Element %d : ",(i+1));
        scanf("%d",&a[i]);
    }
    radixsort( a, n);
    printf("\nSorted Array :\n");
    for ( i=0; i<n; i++ ) printf("%d ",a[i] );
}
void countsort( int arr[], int length, int exp )
{
    int j,count[10],output[10000];
    for ( j=0;        j<10;     j++ ) count[j]=0;                                          //Initialize all elements to zero
    for ( j=0;        j<length; j++ ) count[  (arr[j]/exp)%10  ]++;                        //Counting the frequency
    for ( j=1;        j<10;     j++ ) count[j] += count[j-1];                              //Recreating locations
    for ( j=length-1; j>=0;     j-- ) output[  --count[ (arr[j]/exp)%10 ]  ] = arr[j];     //Sorting the Array and Recreating locations
    for ( j=0;        j<length; j++ ) arr[j] = output[j];                                  //Transferring Back into the Array
}
void radixsort( int arr[], int length )
{
    int mx=arr[0],exp=1,x;
    for ( x=1; x<length; x++ ) if ( arr[x] > mx ) mx = arr[x];                             //Finding Max
    for ( exp=1; mx/exp>0; exp *= 10 ) countsort( arr, length, exp );                      //Counting Sort the Array
}
