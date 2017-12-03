
#include<stdio.h>
void main()
{
   int flag,n,x;
   printf("Enter the length of an Array\n");  
   scanf("%d",&n);                                   \\Taking length of an array from user
   int a[n];                                          \\Intializing an array of length n
   printf("Enter %d value \n",n);
   
   for(int i=0;i<n;i++){
scanf("%d",&a[i]);                                     \\Taking n array elements from the user
   }                                                    
   
   printf("Enter the value to be find :");  
   scanf("%d",&x);                                      \\Element to be find
   
                                                         
   for(i=0;i<n;i++){                                      \\Linear search logic
      if(x==a[i])
      {
 flag=1;
 break;
      }
   }
   if(flag==0)
      printf("%d value not found\n",x);                     \\Not found ..Print Element not exist in given array
   else
      printf("%d value found at location %d\n",x,i);          \\ found..Print Found and the position af the value in array
   getch();
}

