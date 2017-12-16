

////////////////////////////Problem statement/////////////////////////////

/*

Following are common definition of Binomial Coefficients.
1) A binomial coefficient C(n, k) can be defined as the coefficient of X^k in the expansion of (1 + X)^n.

2) A binomial coefficient C(n, k) also gives the number of ways, disregarding order, that k objects can be chosen from among n objects; more formally, the number of k-element subsets (or k-combinations) of an n-element set.

The Problem:
Write a function that takes two parameters n and k and returns the value of Binomial Coefficient C(n, k). For example, your function should return 6 for n = 4 and k = 2, and it should return 10 for n = 5 and k = 2.

Find nCr for given n and r.

Input:
First line contains no of test cases T, for every test case 2 integers as inputs (n,r).


Output:
Compute and print the value in seperate line. Modulus your output to 10^9+7. 


Constraints:
1<=T<=50
1<=n<=1000
1<=r<=800

*/


////////////////////////////Solution/////////////////////////////


#include <bits/stdc++.h>
using namespace std;


int nCr(int n, int r)
{
    int M=1000000007;
    vector<vector<int> > dp (n+1,vector<int>(r+1)) ;
    
    dp[0][0]=1 ;
    
    for (int i = 1 ; i < n+1 ; i++)
    {
        dp[i][0]= 1 ;
    }
    
    for (int i = 1 ; i < r+1 ; i++)
    {
        dp[0][i]= 0 ;
         
    }
    
    for (int i = 1 ; i < n+1 ; i++)
    {
        for (int j = 1 ; j<r+1 ; j++)
        {
            if(j>i)
            {
                dp[i][j]=0;
            }
            else
            {
                dp[i][j]= ( dp[i-1][j-1]+dp[i-1][j] )%M ;
            }
        }
    }
    
    return dp[n][r];
    
}



int main()
{
    int T;
    int n,r;
    cin>>T;
    while(T--)
    {
        cin>>n>>r;
        cout<<nCr(n,r)<<endl;
    }
	return 0;
}








