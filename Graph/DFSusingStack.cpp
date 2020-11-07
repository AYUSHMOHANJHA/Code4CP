#include<bits/stdc++.h>

using namespace std;

void dfs(int start, vector<int>graph[],bool visited[])
{
    stack<int>s;
    s.push(start);
    visited[start]=true;
    
    while(!s.empty())
    {
        int curr = s.top();
        s.pop();
        cout<<curr<<" ";
        for(int i=0;i < graph[curr].size();++i)
        {
            if(visited[graph[curr][i]]==false){
            s.push(graph[curr][i]);
            visited[graph[curr][i]] = true;
            }
        }
    }
}


int main(){

    int N,E;
    cin>>N>>E;

    vector<int>graph[N];
    bool visited[N] = {false};

    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        //graph[v].push_back(u);
    }
    dfs(0,graph,visited);
    cout<<endl;
    return 0;
}
