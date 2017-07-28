#include<stdio.h>

int main ()
{
    int n,ch;
    int key;
    scanf("%d",&key);

    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(key==arr[i])
        {
           ch=i;
          break;
        }
    }
    //complete this

}  
