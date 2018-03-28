// Insertion Sort
#include<stdio.h>
void main()
{
    int n,i, j, key;
    printf("Enter Size of an Array : ");
    scanf("%d",&n);
    int a[n];
    for ( i=0; i< n; i++)                                 // Input in Array
    {
        printf("Enter Element Number %d :",(i+1));
        scanf("%d",&a[i]);
    }
    for ( i=1; i< n; i++ )
    {
        key = a[i];                        //Starts from 2nd element of array a.
        j = i-1;                           // j is the previous element.
        while ( a[j]>=key && j>=0 )          // If previous elements are greater and pointer is not at the end.
        {
            a[j+1] = a[j];                 // Shift all the elements to right side.
            j -= 1;                        // Decrement j
        }
        a[j+1] = key;                        // return key to its new position.
    }
    printf("Sorted Array --> \n");
    for ( i=0; i<n; i++ )
        printf("%d ",a[i]);
}
