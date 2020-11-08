//O(N*E)
#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(int curr, vector<int>graph[],vector<bool>visited)
{
    //cout<<"check:"<<visited[curr]<<endl;
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
   // bool visited[N]={false};            //use vector here 
    vector<bool>visited(N,false);         
     return isCycleUtil(graph[i][j],graph,visited);



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