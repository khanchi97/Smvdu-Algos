// selection sort
#include<stdio.h>
void main()
{
    int n,i, j, min,temp=0;
    printf("Enter Size of an Array : ");
    scanf("%d",&n);
    int a[n];
    for ( i=0; i< n; i++)                                 // Input in Array
    {
        printf("Enter Element Number %d :",(i+1));
        scanf("%d",&a[i]);
    }
    for ( i=0; i<n-1; i++ )
    {
        min = i;
        for ( j=i+1; j<=n; j++)
        {
            if ( a[j] < a[min] )             // Swapping two elements.
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted Array --> \n");
    for ( i=0; i<n; i++ )
        printf("%d ",a[i]);
}
