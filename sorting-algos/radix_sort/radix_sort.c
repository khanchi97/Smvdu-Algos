#include <stdio.h>

void counting_sort(int arr[],int size,int exp)
{
    int aux[size];
    int freq[10];
    int i;
    for(i=0;i<10;i++)
        freq[i]=0;
    int temp;
    for(i=0;i<size;i++)
    {
        temp=(arr[i]/exp)%10;
        freq[temp]++;
    }

    for(i=1;i<10;i++)
        freq[i]+=freq[i-1];

    for(i=size-1;i>=0;i--)
    {
        temp=(arr[i]/exp)%10;
        aux[freq[temp]-1]=arr[i];
        freq[temp]--;
    }

    for(i=0;i<size;i++)
        arr[i]=aux[i];
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
