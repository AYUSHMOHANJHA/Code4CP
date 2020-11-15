/*
Connected Components in an undirected graph
https://www.geeksforgeeks.org/connected-components-in-an-undirected-graph/

Finding connected components for an undirected graph is an easier task.
We simple need to do either BFS or DFS starting from every unvisited vertex, 
and we get all strongly connected components
*/
#include<bits/stdc++.h>

using namespace std;

void dfs(int start, vector<int>graph[],bool visited[])
{   
    stack<int>s;
    visited[start] = true;
    s.push(start);

    while(!s.empty())
    {
        int node = s.top();
        s.pop();
        cout<<node<<" ";
        for(int i=0;i<graph[node].size();i++)
        {
            if(visited[graph[node][i]]==false)
            {   
                 s.push(graph[node][i]);
                 visited[graph[node][i]]= true;
            }
        }
    }
}

int main()
{
    int N,E;
    cin>>N>>E;

    bool temp[N] = {false};
    vector<int>graph[N];
    bool visited[N] = {false};

    for(int i=0; i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0;i<N;i++)
    {
        if(visited[i]==false)
        {
            dfs(i,graph,visited);
            cout<<"\n";
        }
    }
    return 0;
}