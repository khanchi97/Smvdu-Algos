//To find a longest common subsequence between two strings

#include<iostream>

using namespace std;

int max_size_LCS(string X,string Y,int m,int n)
{
    int arr[m+1][n+1];

    for (int i=0;i<m+1;i++)
        arr[i][0]=0;

    for (int i=0;i<n+1;i++)
        arr[0][i]=0;

   for (int i=0;i<m+1;i++)
       for(int j=0;j<n+1;j++)
       {
           if

int main()
{
    string X,Y;
    int m,n,max;
    cin >>X >>Y >>m>>n;
    //cout <<X <<"\n" <<Y<< "\n"<<m <<"\n" <<n;
    
    max_size= max_size_LCS(X,Y,m,n);

    
    return 0;
}
