////////////////////////////Problem statement/////////////////////////////

/////

Given a binary matrix, find out the maximum size square sub-matrix with all 1s.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is n and m,n is the number of rows and m is the number of columns.
The second line of each test case contains array C[n][m] in row major form.

Output:

Print maximum size square sub-matrix.

Constraints:

1 ≤ T ≤ 100
1 ≤ n,m ≤ 50
0 ≤ C[n][m] ≤ 1

//////


////////////////////////////Solution/////////////////////////////

#include <bits/stdc++.h>
using namespace std;


int square_max(vector<vector<int> > matrix)
{
    int max_val=0;
    vector<vector<int> > dp(matrix.size(),vector<int>(matrix[0].size()));
    for(int i=0;i<matrix.size();i++)
	{
	   for(int j=0;j<matrix[0].size();j++)
	   {
	       if(i==0||j==0)
	       {
	           dp[i][j]=matrix[i][j];
	       }
	       else if(matrix[i][j]==0)
	       {
	           dp[i][j]=0;
	       }
	       else if(matrix[i][j]==1)
	       {
	           dp[i][j] = 1+min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
	       }
	       
	       max_val=max(dp[i][j],max_val);
	   }
	}
	return max_val;
}


int main() 
{
	int T;
	cin>>T;
	int m,n;
	while(T--)
	{
	    cin>>m>>n;
	    vector<vector<int> > matrix(m,vector<int>(n,0));
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>matrix[i][j];
	        }
	    }
	    cout<<square_max(matrix)<<endl;
	}
	return 0;
}