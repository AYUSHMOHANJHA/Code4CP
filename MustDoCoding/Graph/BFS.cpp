#include<bits/stdc++.h>
using namespace std;

void bfs(int start, vector<int>graph[],bool visited[])
{
    queue<int>q;
    q.push(start);
    visited[start]=true;

    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        
        for(int i=0;i<graph[curr].size();++i)
        {
            if(visited[graph[curr][i]]==false)
            {
                q.push(graph[curr][i]);
                visited[graph[curr][i]]=true;
            }
        }
    }
}
int main()
{
    int N,E;
    cin>>N>>E;

    vector<int>graph[N];
    bool visited[N] = {false};

    int u,v;
    for(int i=0;i<E;++i){
        cin>>u>>v;
        graph[u].push_back(v);
    }
    bfs(0,graph,visited);
    cout<<endl;

    return 0;
}