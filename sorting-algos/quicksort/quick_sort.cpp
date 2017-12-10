#include<iostream>
using namespace std;

//it is the recursive function of quicksort
void quicksort(int a[],int start,int end){
int temp,d,i,j,k;// d is another temporary variable
if(start<end){
temp=a[start];
i=start;
j=end;
while(i<j){
if(a[i+1]<=temp){
d=a[i+1];
a[i+1]=a[i];
a[i]=d;
i++;}
else{
d=a[i+1];
a[i+1]=a[j];
a[j]=d;
j--;}
}
quicksort(a,start,i-1);
quicksort(a,i+1,end);}
}


int main ()
{
int n;
cout<<"Enter the size of array"<<endl;
cin>>n;//n->size of array(a[])
int a[n],k;
cout<<"Enter the elements"<<endl;
for(k=0;k<n;k++){
    cin>>a[k];}
//for sorting we call the function(recursive function)
quicksort(a,0,n-1);
//print the sorted array
for(k=0;k<n;k++){
    cout<<a[k]<<" ";}

cout<<endl;
}
