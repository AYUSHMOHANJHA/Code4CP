//O(N)

#include<bits/stdc++.h>

using namespace std;

bool isCycleUtil(int curr, vector<int>graph[],bool visited[],bool stack_v[])
{
    if(visited[curr]==false)
    {
        visited[curr] = true;
        stack_v[curr] = true;
        
        for(int i=0;i<graph[curr].size();++i)
        {
            if((visited[graph[curr][i]]==false) && (isCycleUtil(graph[curr][i],graph,visited,stack_v))==true)
            {
                return true;
            }
            else if(stack_v[graph[curr][i]]==true)
            {
                return true;
            }
            
        }
    }
    stack_v[curr] = false;
    return false;
}

bool isCycle(int N, vector<int>graph[])
{
    bool visited[N]={false};
    bool stack_v[N]={false};
    for(int i=0;i<N;++i)
    {
        if(!visited[i])
            {
                if(isCycleUtil(i,graph,visited,stack_v)==true)
                   return true;                
            }
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
    }

    cout<<isCycle(N,graph)<<endl;
   }
    return 0;
}