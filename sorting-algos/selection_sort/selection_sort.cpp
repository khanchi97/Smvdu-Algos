#include<iostream.h>
void main()
{
 int a[50],n,pos,small,temp,i,j;
 cout<<"How many elements you want to exit?";
 cin>>n;
 for(i=0;i<n:i++)
 cin>>a[i];
 for(i=0;i<n;i++)
 {
  small=a[i];
  pos=i;
  for(j=i+1;j<n;j++)
  {
   if(a[j]<small)
   { small=a[j]; }
   pos=j;
   }
   temp=a[i];
   a[i]=a[pos];
   a[pos]=temp;
  }
 cout<<"Array after sorting is";
 for(i=0;i<n;i++)
 cout<<a[i];
}
