#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(int curr, vector<int>graph[],bool visited[])
{
    if(visited[curr]==true)
        return true;
    
    visited[curr] = true;
    for(int i=0; i<graph[curr].size();++i)
    {
        if(isCycleUtil(graph[curr][i],graph,visited) == true)
            return true;
    }
    return false;
}
bool isCycle(int N, vector<int>graph[])
{
    bool visited[N]={false};
    for(int i=0;i<N;i++)
    {
        visited[i]=true;
        for(int j=0;j<graph[i].size();++j)
        {
            if(isCycleUtil(graph[i][j],graph,visited) == true)
                return true;
        }
        visited[i]=false;
    }
    return false;
}

int main()
{
    int N,E;
    cin>>N>>E;

    vector<int>graph[N];

    for(int i=0; i<E; ++i)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    cout<<isCycle(N,graph)<<endl;

    return 0;
}