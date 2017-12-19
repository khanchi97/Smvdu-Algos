FACTORIAL OF LARGE NUMBERS-
    Factorial of small numbers can be easily calculated using simple for loop but for large numbers like 120 or 130,this method
    seems very slow and time-taking.Thus,the following method using array helps to calculate it faster and easily.
    A question 'Factorial Array' was in 'World Codesprint 2017' that ended on Dec 16,2017 on Hackerrank which needed the following
    algo to calculate the factorial of large numbers.
    The link of the question is- https://www.hackerrank.com/contests/world-codesprint-12/challenges/factorial-array/problem
    Do try this algo.It will help alot.
------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<math.h>
int main()
{
int ar[500];                //declaring array to store factorial of large number.
int num,i,j,k,t;
printf("Enter the number-");
scanf("%d",&num);
k=0;
ar[0]=1;                    //Initialising the array index and element.
for(i=num;i>=2;i--)         //Loop to calculate the factorial of the given large number.
{
    t=0;
    for(j=0;j<=k;j++)
    {
        t=(ar[j]*i)+t;      // t stores the digit which should be added to next value multiplied.
        ar[j]=t%10;         // Here,we chop the last digit of the number.
        t=t/10;             // Here,we chop the carry digit.
    }
    while(t>0)              //This while loop chops digits from last carry digits.
    {
        ar[++k]=t%10;
        t=t/10;
    }
}
printf("Factorial of the %d is\n",num);
for(i=k;i>=0;i--)           //Loop to print output of calculated factorial i.e the array.
    printf("%d",ar[i]);
return 0;
}
