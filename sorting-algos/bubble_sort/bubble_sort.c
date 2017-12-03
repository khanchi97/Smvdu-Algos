#include<stdio.h>

int main ()
{
    //complete this

    int n; //size of array
    scanf("%d",&n);
   int arr[n];
    int temp,swap; //temp variable used as third variable in swapping
    int i;
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]);}
    while(1)//infinite loop
        {
        swap=0;
        for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            //if number before is greater than the number after it than swap them.(for ascending order)
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swap=1;
        }
        }

    if(swap==0)
        break;//if all swapping done i.e. list is sorted than break out of the loop
        }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;

}
