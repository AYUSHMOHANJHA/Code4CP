//O(N)

#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(int curr, vector<int>graph[],bool visited[],int parent)
{
    visited[curr] = true;

    for(int i = 0; i<graph[curr].size();++i)
    {
        if(!visited[graph[curr][i]])
        {
            if(isCycleUtil(graph[curr][i],graph,visited,curr))
            {
                return true;
            }
        }
        else if(graph[curr][i] != parent)
        {
            return true;   
        }
    }
    return false;
}

bool isCycle(int N, vector<int>graph[])
{
    bool visited[N]={false};
    for(int i=0;i<N;++i)
    {
        if(!visited[i])
            if(isCycleUtil(i,graph,visited,-1))
                return true;
    }
    return false; 
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
        graph[v].push_back(u);
    }

    cout<<isCycle(N,graph)<<endl;
   }
    return 0;
}