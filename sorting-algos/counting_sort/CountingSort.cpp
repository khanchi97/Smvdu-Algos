#include <bits/stdc++.h>
using namespace std;

void CountSort(int a[],int n)
{
    int final[n]; //This array will contain the sorted order
 
    int x=*max_element(a,a+n);
    int count[x+1]; //This array contains the count of each element
    int i;
    memset(count, 0, sizeof(count)); //Initialize the array with 0
 
    for(i=0 ; i<n; i++)
    {
    	count[a[i]]++;
    }
 
    //Changing count array so that now it contains the actual position of elements in final array 
    for (i = 1; i <= x; ++i)
        count[i] += count[i-1];
 
    // Building the final array
    for (i = 0; i<n ; ++i)
    {
        final[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }
 
    //Copy the sorted order from final array to a[] array
    for (i = 0; i<n ; ++i)
        a[i] = final[i];
}
 
int main()
{
    int a[]={2,4,5,12,2,1,8,3,7,7,9,6,8,8};
    int size= sizeof(a)/sizeof(a[0]);
    CountSort(a,size);
 
	cout<<"The sorted array is :\n";
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
    return 0;
}

/*
Output :
The sorted array is :
1 2 2 3 4 5 6 7 7 8 8 8 9 12 
*/