/*To use topological sort, the graph must be 
Connected Directed Acyclic Graph(DAG)*/

#include<iostream>
using namespace std;
 
int main()
{
    int i,j,k,n,a[10][10],indeg[10],flag[10],count=0;
    // a is the matrix used to store the graph
    // indeg is the array storing indegree of each vertex 
    // array of flags is used to check if vertex is already selected
    cout<<"Enter the no of vertices:\n";
    cin>>n;
 
    cout<<"Enter the adjacency matrix:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }    
    }
 
    //initialize indegree and flag array to zero
    for(i=0;i<n;i++)
    {
        indeg[i]=0;
        flag[i]=0;
    }
 
    //checking for indegree of each vertex and adding it to array
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {    
            indeg[i]=indeg[i]+a[j][i];
        }
    }    
 
    cout<<"\nThe topological order is:";
 
    while(count < n)
    {
        for(k=0;k<n;k++)
        {
            if((indeg[k]==0) && (flag[k]==0))
            {
                cout<<k+1<<" ";
                flag[k]=1;
            }
    
            for(i=0;i<n;i++)
            {
                if(a[i][k]==1)
                {
                    indeg[k]--;
                }    
            }
        }
        count++;
    }
    return 0;
}