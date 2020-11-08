//O(N)

#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(int curr, vector<int>graph[],bool visited[],int parent)
{
    visited[curr] = true;

    for(int i = 0; i<graph[curr].size();++i)
    {
        if(visited[graph[curr][i]])
        {
            if(isCycleUtil(graph[curr][i],visited,curr))
            {
                return true;
            }
        }
    }
}

bool isCycle(int N, vector<int>graph[])
{
    bool visited[N]={false};
    
    return (isCycleUtil(graph[0][0],graph,visited,graph[0][0]);
                    
}

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cout<<"h"<<endl;
    int N,E;
    cin>>N>>E;

    vector<int>graph[N];
    //graph.clear();
    for(int i=0; i<E; ++i)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    cout<<isCycle(N,graph)<<endl;
   }
    return 0;
}