#include<iostream.h>
 void main()
{
  int a[50],i,j,temp,n;
  cout<<"enter the elements";
  for(i=0;i<n;i++)
   {
    cin>>a[i];
    }
  for(i=0;i<n;i++)
  {
   for(j=0;j<(n-1);j++)
   {
    if(a[j>a[j+1])
    { 
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
     }
   }
  }
  cout<<"Elements after sorting";
  for(i=0;i<n;i++)
  cout<<a[i];
 }
     
