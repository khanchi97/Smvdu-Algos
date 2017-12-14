/////////////////////////Problem Statement/////////////////////////

///////////////////

The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. For example, the length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 and LIS is {10, 22, 33, 50, 60, 80}.
longest-increasing-subsequence

Given a sequence, find the length of the longest increasing subsequence from a given sequence .
The longest increasing subsequence means to find a subsequence of a given sequence in which the subsequence's elements are in sorted order, lowest to highest, and in which the subsequence is as long as possible. This subsequence is not necessarily contiguous, or unique.

Note: Duplicate numbers are not counted as increasing subsequence.

For example:
 length of LIS for 
{ 10, 22, 9, 33, 21, 50, 41, 60, 80 } is 6 and LIS is {10, 22, 33, 50, 60, 80}.

Input:

The first line contains an integer T, depicting total number of test cases. 
Then following T lines contains an integer N depicting the size of array and next line followed by the value of array.


Output:

Print the Max length of the subsequence in a separate line.


Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000
0 ≤ A[i] ≤ 300

///////////////////






////////////////////////////Solution///////////////////////////////////


#include <bits/stdc++.h>
using namespace std;

int lis(vector<int> array)
{
    vector<int> dp(array.size(),1);
    int n=array.size(),max_val=0;
             for (int i=0;i<n-1;i++)
             {
                for (int j=i+1;j<n;j++)
                {
                               if(array[i]<array[j])
                               {
                                if(dp[j]<dp[i]+1)
                                {
                                    dp[j]=dp[i]+1;
                                }
                               }                
                }
    }
    for (int i=0;i<n;i++)
    {
        max_val=max(dp[i],max_val);
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
        vector<int>  array(n,0);
        for(int i=0;i<n;i++)
        {
                cin>>array[i];
        }
        cout<<lis(array)<<endl;
    }
    return 0;
}
