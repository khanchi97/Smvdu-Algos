#include <bits/stdc++.h>
using namespace std;
void Merge(int a[] , int start, int mid, int end)
{
	int i,j,k;
    int b=mid-start+1;
    int c=end-mid;
 
    int l[b], r[c]; //temp arrays
 
    for (i = 0; i < b; i++)
        l[i] = a[start + i];
    for (j = 0; j < c; j++)
        r[j] = a[mid + 1+ j];
 
    i=0;j=0;k=start;
    //Merge the 2 arrays in sorted order
    while (i < b && j < c)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
 
    //add the remaining elements in sorted order
    while (i < b)
    {
        a[k] = l[i];
        i++;
        k++;
    }
 
    while (j < c)
    {
        a[k] = r[j];
        j++;
        k++;
    }

}
void MergeSort(int a[], int start , int end )
{
    if( start < end ) 
    {
     int mid = (start + end ) / 2 ;   //dividing the problem into sub-problems
     MergeSort(a,start,mid);      //Sort the first half
     MergeSort(a,mid+1,end);       //Sort the second half

     Merge(a,start,mid,end);  //Merge both the parts and sort them
}                    
}
int main() 
{
    int a[]= {55,7,2,13,1,23,14,54};
    int size = sizeof(a)/sizeof(a[0]);
    MergeSort(a,0,size-1);
    cout<<"Sorted Array is :\n";
    for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
    return 0;
}

/*
Output : 
Sorted Array is :
1 2 7 13 14 23 54 55 
*/