
#include <stdio.h>
 
int main()
{
    int i,j,k,n,indeg[10],flag[10],count=0;
 	// indeg is the array storing indegree of each vertex 
    // array of flags is used to check if vertex is already selected
    printf("Enter the no of vertices:\n");
    scanf("%d",&n);
    //creating matrix of size n*n for the graph
 	int a[n][n];

    printf("Enter the adjacency matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	scanf("%d",&a[i][j]);
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
 
    printf("\nThe topological order is:");
 
    while(count<n)
    {
        for(k=0;k<n;k++)
        {
            if((indeg[k]==0) && (flag[k]==0))
            {
                printf("%d ",(k+1));
                flag [k]=1;
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