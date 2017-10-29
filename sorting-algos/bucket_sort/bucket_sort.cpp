#include<iostream.h>

int main( void )
{
int unsorted[50] , bucket[10][50]={{0}} , sorted[50] ;
int   j , k , m , p , flag = 0, num, N;
cout<<"\nEnter the number of elements to be sorted :";
cin>>N;
cout<<"\nEnter the elements to be sorted :\n";
for(k=0 ;  k < N ; k++){
cin>>num;
sorted[k] = unsorted[k] = num;
}

for(p=1; flag != N ; p*=10){

flag = 0;

for(k=0;k<N;k++){
bucket[(sorted[k]/p)%10][k] = sorted[k];
if ( (sorted[k]/p)%10  == 0 ){
   flag++;
   }
}

if (flag == N){
   cout<<"\n Sorted List: \n";
   for(j=0 ;  j < N ; j++)
   {
   cout<<\t sorted[j];  
   }
   cout<<"\n";
   getch();
   return 0;
   }

for(j=0,m=0;j<10;j++){
for(k=0;k<N;k++){
if( bucket[j][k] > 0 ){
  sorted[m] = bucket[j][k];
  bucket[j][k] = 0 ;
  m++;
  }
}
}

}

return 0 ;
  
}
