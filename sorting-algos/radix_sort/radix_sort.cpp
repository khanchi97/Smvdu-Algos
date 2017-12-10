#include <iostream>
using namespace std;

void counting_sort(int arr[],int n,int exp)  //radix sort is only applicable for non-negative integers
{
    int aux[n];      //contains sorted array
    int freq[10];       //frequency of digits 0 to 9
    int i;
    for(i=0;i<10;i++)
        freq[i]=0;
    int temp;
    for(i=0;i<n;i++)
    {
        temp=(arr[i]/exp)%10;   //exp is power of 10 according to digit used for sorting
        freq[temp]++;
    }

    for(i=1;i<10;i++)
        freq[i]+=freq[i-1];     //finding cumulative frequency for determining place to insert

    for(i=n-1;i>=0;i--)
    {
        temp=(arr[i]/exp)%10;
        aux[freq[temp]-1]=arr[i];   //inserting the element and decreasing frequency
        freq[temp]--;
    }

    for(i=0;i<n;i++)
        arr[i]=aux[i];              //copying sorted array into original array

}

void radix_sort(int arr[],int n)
{
    int i;
    int exp=1;
    int maxm=arr[0];
    for(i=1;i<n;i++)
    {
        if(maxm<arr[i])
            maxm=arr[i];
    }
    int digit =0;
    int temp=maxm;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    for(i=0;i<digit;i++)
    {
        counting_sort(arr,n,exp);
        exp*=10;
    }
}
int main ()
{
    int n,i;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];
    radix_sort(arr,n);
    cout<<"The sorted array is"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
