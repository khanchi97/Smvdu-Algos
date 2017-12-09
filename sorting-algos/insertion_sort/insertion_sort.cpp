#include<iostream.h>
void main()
{
 int a[50],i,j,temp,n;
 cout<<"How many elements do you wish to enter";
 cin>>n;
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=1;i<n;i++)
 {
  temp=a[i];
  j=i-1;
  while(temp<a[j])
  {
   a[j+1]=a[j];
   j--;
   }
   a[j+1]=temp;
  }
  cout<<"Array after sorting is";
  for(i=0;i<n;i++)
  cout<<a[i];
 }
  
 
