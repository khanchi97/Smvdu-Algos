////////////////////////////Problem statement/////////////////////////////

/*
/////
Given a N X N  matrix Matrix[N][N] of positive integers.  There are only three possible moves from a cell Matrix[r][c].

1. Matrix[r+1][c]

2. Matrix[r+1][c-1]

3. Matrix[r+1][c+1]

Starting from any column in row 0, return the largest sum of any of the paths up to row N-1.

Input:
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the order of matrix. Next line contains N*N integers denoting the elements of the matrix in row-major form.

Output:
Output the largest sum of any of the paths starting from any cell of row 0 to any cell of row N-1. Print the output of each test case in a new line.

Constraints:
1<=T<=20
2<=N<=20
1<=Matrix[i][j]<=1000 (for all 1<=i<=N && 1<=j<=N)

//////
*/


////////////////////////////Solution/////////////////////////////

#include <bits/stdc++.h>
using namespace std;


int max_sum(vector<vector<int> > &matrix)
{
	vector<vector<int> > dp(matrix.size(),vector<int>(matrix.size(),0));
	int n=matrix.size();
	int max_val=INT_MIN;
	for(int i=0;i<n;i++)
	{
                        for(int j=0;j<n;j++)
	    	{
	                  if(i==0)
	                  {
	                  	dp[i][j]=matrix[i][j] ;
	                  }
	                  else if(j==0)
	                  {
	                  	dp[i][j]= max(dp[i-1][j],dp[i-1][j+1]) + matrix[i][j] ;
	                  }
	                  else if(j==n-1)
	                  {
	                  	dp[i][j]= max(dp[i-1][j-1], dp[i-1][j])+matrix[i][j] ;
	                  }
	                  else if (i!=0 && j!=0)
	                  {
	                  	dp[i][j]= max(max (dp[i-1][j] , dp[i-1][j-1]), dp[i-1][j+1] ) + matrix[i][j] ;
	                  }
	    	}
	 }
	for(int i=0;i<n;i++)
	{
		max_val=max( max_val,dp[n-1][i] );
	}
	return max_val;
}


int main() 
{
	int T;
	cin>>T;
	int n;
	while(T--)
	{
	    cin>>n;
	    vector <vector<int> >  matrix(n,vector<int>(n,0));
	    for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	                  cin>>matrix[i][j];
	    	}
	    }
	    cout<<max_sum(matrix)<<endl;
	}
	return 0;
}

