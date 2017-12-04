#include <stdio.h>

void input(int arr[],int size)
{
    int i;

    printf("Enter the array elements\n");

    for(i=0;i<size;i++)

        scanf("%d",&arr[i]);
}

void print_array(int arr[],int size)
{
    printf("The sorted array is\n");
    int i;
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void gnome_sort(int arr[],int size)
{
    int i=0,temp;

    while(i<size)
    {
        if(i==0)
            i++;    //as first element has no previous element

        else if(arr[i-1]>arr[i])    //checks if previous element is larger then swaps and i is decreased by 1
        {
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
            i--;
        }
        else
            i++;    //moves i forward
    }
}


int main()
{
    printf("Enter the number of elements in array\n");

    int size,i;

    scanf("%d",&size);

    int arr[size];

    input(arr,size);    //for getting input array

    gnome_sort(arr,size); //sorts using gnome sort

    print_array(arr,size);//prints the sorted array
}
