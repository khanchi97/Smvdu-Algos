include<iostream.h>
int Bsearch(int[],int,int);         //Bsearch(array,size,item to be searched)
int main()
{
int A[50],item,n,index;
cout<<"Enter desired array size(max. 50)";
cin>>n;
cout<<"\nEnter array elements in ascending order";
for(int i=0;i<n;i++)
 {
    cin>>A[i];
 }
cout<<"\nEnter element to be searched";
cin>>item;
index = Bsearch(A,n,item);
if(index == -1)
   cout<<"\nElement not found!";
else
   cout<<"\nElement found at index:"<<index<<",Position:"<<index+1;
return 0;
}

int Bsearch(int A[], int size, int item)
{
   int beg,last,mid;
   beg=0;
   last = size-1;
   while(beg<=last)
   {
     mid = (beg+last)/2;
     if(item == A[mid])
       return mid;
     else if(item>A[mid])
          beg = mid+1;
     else
          last = mid-1;
    }
   return -1;
}
