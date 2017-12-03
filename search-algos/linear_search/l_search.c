
#include<stdio.h>
void main()
{
   int i,n,x,flag=0;
   printf("enter how many value in array\n");  \\Taking no of elements in an array from user
   scanf("%d",&n);
   int a[n];
   printf("Enter %d value \n",n);
   for(i=0;i<n;i++)
scanf("%d",&a[i]);     \\Taking input  array elements from user
   scanf("%d",&n);
   printf("Which value to be search :");
   scanf("%d",&x);      \\Element to be find
   scanf("%d",&n);
           \\Linear search logic
   for(i=0;i<n;i++){
      if(x==a[i])
      {
 flag=1;
 break;
      }
   }
   if(flag==0)
      printf("%d value not found\n",x);   \\Not found ,,Print -1
   else
      printf("%d value found at location %d\n",x,i);  \\ found..Print value
   getch();
}

