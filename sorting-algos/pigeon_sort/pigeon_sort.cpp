#include<bits/stdc++.h>
using namespace std;
void pigeonhole(int a[],int n)
{
    int min=a[0],max=a[0],i;     //initialise the value minimum and maximum equal to first element of the array
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];           //here we find the maximum value of array and store in max
        if(min>a[i])
            min=a[i];       //here we find the minimum value of the array and store in min
    }
    int range=max-min+1;  //we define a size of holes

    vector<int>holes[range]; // here we initialise a array

    for(int i=0;i<n;i++)
    {
    holes[a[i]-min].push_back(a[i]);   //here we sorted the array and store in the holes array
    }
    int index=0;
   for(int i=0;i<range;i++)
      {
        vector<int>::iterator it;
        for(it=holes[i].begin();it!=holes[i].end();++it)
        {
            a[index++]= *it;     // here we store the vlue of holes array into a array
        }
    }
}
int main()
{
    int n;
    cout<<"enter the n";
    cin>>n;     //we take a array size input from the user
    int a[n],i;
    for(i=0;i<n;i++)
    {
     cin>>a[i];    // initialise the array
    }
     pigeonhole(a,n);   //call the function
    cout<<"the sorted array is"<<endl;
     for(i=0;i<n;i++)
     {   
      cout<<a[i]<<" ";
     }
    return 0;
}



/* Input 
enter the size of n   
   7 
   6 4  5 3  2 1 
the sorted array is
   1 2 3 4 5 6
*/      
