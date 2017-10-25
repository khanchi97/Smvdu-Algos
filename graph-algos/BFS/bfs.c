#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
    {
        int test;
        cin >>test;
        for(int a0=0;a0<test;a0++)
            {
                int n,m,a,b;
                cin >>n >>m;
                vector <int> AL[n+1];
                for(int i=1;i<=m;i++)
                    {
                        cin >>a >>b;
                        AL[a].push_back(b);
                        AL[b].push_back(a);
                    }
                int s;
                cin >>s;
            
                int v[n+1]={0},d[n+1]={0};
                vector <int >q;
                q.push_back(s); // it's the source point from which we have to search
                v[s]=1; 
                while(!q.empty())
                    {
                        int z=q[0];
                        q.erase(q.begin());
                        for(int i1=0;i1<AL[z].size();i1++)
                            {
                                int t=v[AL[z][i1]];
                                int v1=AL[z][i1];
                                if(t==0)
                                    {
                                        q.push_back(v1);
                                        d[v1]=d[z]+1;
                                        v[v1]=1;
                                    }
                           }

                   }
                for(int i=1;i<=n;i++) //shortest distance of points from source s
                    if(i!=s)
                    {
                    if(d[i]==0)
                        cout <<"-1" <<" ";
                    else
                    cout <<d[i]*6 <<" ";
                }
            cout <<"\n";
            }
            return 0;
   }

             


