/////////////////////////Problem Statement/////////////////////////

/*
///////////////////
LCS Problem Statement: Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous. For example, “abc”, “abg”, “bdf”, “aeg”, ‘”acefg”, .. etc are subsequences of “abcdefg”. So a string of length n has 2^n different possible subsequences.

It is a classic computer science problem, the basis of diff (a file comparison program that outputs the differences between two files), and has applications in bioinformatics.

Examples:
LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.
LCS for input Sequences “AGGTAB” and “GXTXAYB” is “GTAB” of length 4.

Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.

Input:
First line of the input contains no of test cases  T,the T test cases follow.
Each test case consist of 2 space separated integers A and B denoting the size of string str1 and str2 respectively
The next two lines contains the 2 string str1 and str2 .


Output:
For each test case print the length of longest  common subsequence of the two strings .


Constraints:
1<=T<=200
1<=size(str1),size(str2)<=100

///////////////////
*/





////////////////////////////Solution///////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

int LCS(string &A,string &B)
{
    vector< vector<int> > dp(A.length()+1,vector<int>(B.length()+1));
    for(int i=0; i<=A.length();i++)
    {
        for(int j=0;j<=B.length();j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    }
    return dp[A.length()][B.length()];
}


int main() 
{
	int T;
	cin>>T;
	string A,B;
	int m,n;
	while(T--)
	{
	    cin>>m>>n;
	    cin>>A;
	    cin>>B;
	    cout<<LCS(A,B)<<endl;
	}
	return 0;
}
