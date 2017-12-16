#include <stdio.h>

//selsort sort functin sorts the array for interpolation search

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

int interpolation_search(int A[],int low,int high,int key)
{
    if(high<low)
        return -1;

    int pos = low + (((double)(high-low) /(A[high]-A[low]))*(key - A[low])); //calculating the pos position

    if(key==A[pos])
        return pos;
    else if(key<A[pos])
        return interpolation_search(A,low,pos-1,key);//searching in left half if key smaller
    else
        return interpolation_search(A,pos+1,high,key);//else searches right half
}

int main()
{
    int size;

    printf("Enter size of array\n");

    scanf("%d",&size);

    int i;

    int A[size],oindexA[size],key;//array oindex stores the index in unsorted array corresponding to index in sorted array


    for(i=0;i<size;i++)
        oindexA[i]=i;    //initialising the original index array

    printf("Enter the elements of array\n");

    for(i=0;i<size;i++)
        scanf("%d",&A[i]);

    printf("Enter the key to find\n");

    scanf("%d",&key);

    selsort(A,oindexA,size);  //sortiing by selection sort for interpolation_search and storing original indices in array oindexA

    int index=interpolation_search(A,0,size-1,key);//calling interpolation_search function

    if(index==-1)
        printf("Element %d not found in the array\n",key);
    else
        printf("Element %d found in the array at the index %d\n",key,oindexA[index]);//oindexA array converts index from sorted array to that in unsorted array

}

