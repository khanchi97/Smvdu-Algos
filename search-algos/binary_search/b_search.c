\\ condition for Binary search is that elements in array mst be in Sorted order

#include<stdio.h>
int main ()
{
    
   int a[100],i,n,x,f,l,m,flag=0;
   printf("enter how many value in array\n");   
   scanf("%d",&n);                                      \\ Length of an array
   printf("Enter %d value in ascending order\n",n);  
   for(i=0;i<n;i++)                \\ Taking input values of an array
scanf("%d",&a[i]);
   printf("Which value to be search ->");
   scanf("%d",&x);             \\ Element to be found
        \\Binary Search logic 
   f=0;l=n-1;       \\ intialize f=0 and l=n-1
   while(f<=l)
   {
      m=(f+l)/2;    \\ find mid element of an sorted array
      if(x==a[m])
      {
 flag=1;
 break;
      }
      else if(x<a[m])     \\ if x<a[m]  then replace l=n-1 by l=m-1
     l=m-1;
  else
     f=m+1;  \\  if x>a[m] then replace f=0 by f=m+1
   }
   if(flag==0)
      printf("%d value not found\n",x);  \\ if value not found ..do nothing
   else
      printf("%d value found at location %d\n",x,m);  \\ if value found print its location

}
