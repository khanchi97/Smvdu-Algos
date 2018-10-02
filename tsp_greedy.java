//this program solves the travelling salesman problem using greedy approach.


import java.io.*;
import java.util.*;
class tsp_greedy
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();                   //input the number of nodes
	int arr[][]=new int[n][n];              //create a  cost-adjacency 2-D matrix
	int visit[]=new int[n];                // create an array to keep a track of visited  nodes
  
	for(int i=0;i<n;i++)                   // input the  cost-adjacency 2-D matrix
	{
		for(int j=0;j<n;j++)
		{
		arr[i][j]=sc.nextInt();
	    }
		visit[i]=0;
	}
      int cost=0;                       //total cost of traversal
      int counter=1;
      int node=0;
      int path[]=new int[n+1];          //create an array to store the path of traversal
      path[0]=1;
      int t=1;
      while(counter < n)
      {
    	  int jj=0;
    	  int min=999;
    	  int k=node;
    	  for(int j=0;j<n;j++)                //find the next minimum node from the current node
    	  {
    		  if(arr[node][j]!=0) 
    		  {
    		   if(visit[j]==0)
    		  {
    			  if(arr[node][j]<min)
    			  {
    				  min=arr[node][j];
    				  jj=j;
    			  }
    		  }
    	  }
    	  }
    	  visit[node]=1;
    	  node=jj;
    	  arr[node][k]=0;
    	  cost=cost+min;                         //update the cost of traversal
    	  counter++;
    	  path[t]=node+1;
    	  t++;
      }
      cost=cost+arr[0][node];
      path[n]=1;
      System.out.println("the path is: ");
     for(int i=0;i<=n;i++)                    //print the path
      {
    	  System.out.print(path[i] + "  ");
      }
      System.out.println();
      System.out.print("cost="+ cost);        //print the total cost
	}
}
