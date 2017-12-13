#include <stdio.h>
int count=0;//global variable count stores the number of times element found
//using selection sort for producing sorted array for binary search

void selsort(int A[],int oindexA[],int size)
{
	int flag=0,temp,min,i,j;

			for(i=0;i<size;i++)
				{	min=A[i];
					flag=i;
					for(j=i+1;j<size;j++)
				{
					if(A[j]<min) {
                                    min=A[j];
                                    flag=j;
                                }
				}
			temp=A[i];

            A[i]=min;
			A[flag]=temp;

			temp=oindexA[i];
			oindexA[i]=oindexA[flag]; //original index of A[i] after swapping in unsorted array
			oindexA[flag]=temp; //original index of A[flag] after swapping in unsorted array
		}
}

void binarysearch(int A[],int low,int high,int key,int index[])
{
    if(high<low)
        return;

    int mid=(low+high)/2;

    if(key==A[mid])
        {
            index[count++]=mid; //index of found elements is stored in array index

            binarysearch(A,low,mid-1,key,index);    //still searches left half as same elements may be repeated
            binarysearch(A,mid+1,high,key,index);   //same for right half
        }

    else if(key<A[mid])
        binarysearch(A,low,mid-1,key,index);//searching in left half if key smaller
    else
        binarysearch(A,mid+1,high,key,index);//else searches right half
}

void main()
{
    int size;

    printf("Enter size of array\n");

    scanf("%d",&size);

    int i;

    int A[size],oindexA[size],key;//array oindex stores the index in unsorted array corresponding to index in sorted array

    int index[size];//stores the indices of searched element

    for(i=0;i<size;i++)
        oindexA[i]=i;    //initialising the original index array

    printf("Enter the elements of array\n");

    for(i=0;i<size;i++)
        scanf("%d",&A[i]);

    printf("Enter the key to find\n");

    scanf("%d",&key);

    selsort(A,oindexA,size);  //sortiing by selection sort for binary search and storing original indices in array oindexA

    binarysearch(A,0,size-1,key,index);//calling binarysearch function

    if(count==0)
        printf("Element %d not found in the array\n",key);
    else
    {
        printf("Element %d found in the array at the following indices\n",key);
        for(i=0;i<count;i++)
            printf("%d",oindexA[index[i]]);//oindexA array converts index from sorted array to that in unsorted array

            printf("\n");
    }

}


