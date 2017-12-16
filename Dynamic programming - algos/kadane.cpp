/////////////////////////Problem Statement/////////////////////////

/*
///////////////////
Write an efficient C++ program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

Given an array containing both negative and positive integers. Find the contiguous sub-array with maximum sum.
 
Input:
The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.
 
Output:
Print the maximum sum of the contiguous sub-array in a separate line for each test case.
 
Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 1000
-100 ≤ A[i] <= 100
///////////////////
*/


////////////////////////////Solution///////////////////////////////////

#include <bits/stdc++.h>
using namespace std;


int kadane(vector<int> &vec)
{
    int current_max=vec[0] ;
    int global_max=vec[0] ;
    for(int i = 1 ; i<vec.size() ; i++)
    {
        current_max = max (vec[i],current_max+vec[i]);
        global_max = max (current_max,global_max);
    }
    return global_max;
}

int main() 
{
	int T;
	cin>>T;
	int n;
	while(T--)
	{
	    cin>>n;
	    vector<int> vec(n,0);
	    for(int i = 0 ; i<n ; i++)
	    {
	        cin>>vec[i];
	    }
	    cout<<kadane(vec)<<endl;
	}
	return 0;
}
