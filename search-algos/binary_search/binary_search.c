//gurjot273

#include <stdio.h>

//using insertion sort for producing sorted array for binary search

void insertionsort(int A[],int n)
{
	int i,j,key;

	for(i=1;i<n;i++)
		{
			key=A[i];
			for(j=i-1;j>=0 && A[j]>key;j--)
				{A[j+1]=A[j];}

				A[j+1]=key;
		}
}


int binarysearch(int A[],int low,int high,int key)
{
    if(high<low)
        return -1;

    int mid=(low+high)/2;

    if(key==A[mid])
        return mid;
    else if(key<A[mid])
        return binarysearch(A,low,mid-1,key);//searching in left half if key smaller
    else
        return binarysearch(A,mid+1,high,key);//else searches right half
}

void main()
{
    int size;

    printf("Enter size of array\n");

    scanf("%d",&size);

    int i;

    int A[size],key;

    printf("Enter the elements of array\n");

    for(i=0;i<size;i++)
        scanf("%d",&A[i]);

    printf("Enter the key to find\n");

    scanf("%d",&key);

    insertionsort(A,size);  //sortiing by insertion sort for binary search

    int index=binarysearch(A,0,size-1,key);//calling binarysearch function

    if(index==-1)
        printf("Element %d not found in the array\n",key);
    else
        printf("Element %d found in the sorted array at index %d",key,index);
}


