#include<bits/stdc++.h>
using namespace std;



void topo(int start, vector<int>graph[],bool visited[],stack<int> &st)
{
    visited[start] = true;

    for(int i=0;i<graph[start].size();++i)
    {
        if(visited[graph[start][i]]==false)
            topo(graph[start][i],graph,visited,st);
    }
st.push(start);
}

int main()
{
    int N,E;
    cin>>N>>E;
    stack<int>st;
    vector<int>graph[N];
    bool visited[N] = {false};
 
    for(int i=0; i<E; i++)
    {
        int u,v;
        cin>>u>>v;

        graph[u].push_back(v);
    }
    for(int i=0;i<N;i++)
        if(!visited[i])
            topo(i,graph,visited,st);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    return 0;

}