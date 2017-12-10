#include <stdio.h>

void counting_sort(int arr[],int size,int exp)  //radix sort is only applicable for non-negative integers
{
    int aux[size];      //contains sorted array
    int freq[10];       //frequency of digits 0 to 9
    int i;
    for(i=0;i<10;i++)
        freq[i]=0;
    int temp;
    for(i=0;i<size;i++)
    {
        temp=(arr[i]/exp)%10;   //exp is power of 10 according to digit used for sorting
        freq[temp]++;
    }

    for(i=1;i<10;i++)
        freq[i]+=freq[i-1];     //finding cumulative frequency for determining place to insert

    for(i=size-1;i>=0;i--)
    {
        temp=(arr[i]/exp)%10;
        aux[freq[temp]-1]=arr[i];   //inserting the element and decreasing frequency
        freq[temp]--;
    }

    for(i=0;i<size;i++)
        arr[i]=aux[i];              //copying sorted array into original array

}

void radix_sort(int arr[],int size)
{
    int i;
    int exp=1;
    int max=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    int digit =0;
    int temp=max;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    for(i=0;i<digit;i++)
    {
        counting_sort(arr,size,exp);
        exp*=10;
    }
}
int main ()
{
    int size,i;
    printf("Enter the number of elements in array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array\n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    radix_sort(arr,size);
    printf("The sorted array is \n");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
