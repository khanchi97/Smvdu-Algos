EXPONENTIAL SEARCH in C:
        This search algo for searching find its application in large sized arrays.It is better than Linear and
        Jump search and equivalent to Binary Search.Its time complexity is O(logn).The working of the search is
        as follows:
        1. Firstly,it finds the range where element to be searched can be present.
        2. Next,it does Binary Search across the found range.
------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include<math.h>                //including preprocessor directives
#define max_len 500             //defining the value of max_len as 500.
int a[max_len],num;             //declaring global variables

int min(int i,int j)
{
    if(j>i)
         return i;
    else
         return j;
}
int binary_search(int number,int beg,int end)   //binary search function implementing its algo and element in the given range.
{
       int mid;
       mid=(beg+end)/2;
    while(beg<=end)
    {
              if(a[mid]==number)
              {
                    return mid;                 //returns mid index if element found.
              }
              else
              {
                     if(a[mid]<number)
                     {
                             beg=mid+1;
                     }
                     else
                     {
                             end=mid-1;
                     }
                     mid=(beg+end)/2;
              }
    }
    return -1;                                      //return -1 if element not found.
}
int find(int number)                                //function to find range in which elemnt may be present.
{
    int i,result;i=1;
    if(a[0]==number)
    {
          return 0;
    }
    else
    {
          while(a[i]<=number && i<num)
          {
             i=i*2;
          }
    }
    return binary_search(number,i/2,min(i,num));  //min function is used to find minimum of i and length of array.
}
int main()
{
    int i,result,number;
    printf("Enter the size of array");            //inputs size of array to be entered.
    scanf("%d",&num);
    for(i=0;i<num;i++)                            //loop to enter numbers in array.
    {
          printf("Enter element");
          scanf("%d",&a[i]);
    }
       printf("Number you want to search-");
       scanf("%d",&number);                       //enter number to be searched.
       result=find(number);                       //calls find function to find the index of number.
       if(result==-1)
       {
             printf("Number not in entered array") ;
       }
       else
       {
             printf("The entered number is at %d position",++result);
       }
       return 0;
}
