#include<bits/stdc++.h>
using namespace std;
void dfs(int start, vector<int>graph[], bool *visited){
    visited[start] = true;
    cout<<start<<" ";
    for(int i=0; i<graph[start].size();++i){
        if(visited[graph[start][i]]==false)
            dfs(graph[start][i],graph,visited);
    } 
}
int main(){

    int N,E;
    cin>>N>>E;

    vector<int>graph[N];
    bool visited[N];

    memset(visited, false, sizeof(visited));

    for(int i=0;i<E;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(2,graph,visited);
    cout<<endl;

}
