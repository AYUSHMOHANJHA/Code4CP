// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
vector<int> res;
void dfs1(int start,vector<int> g[],bool vis[],int N)
{
    vis[start]=true;
    res.push_back(start);
    for(int i=0; i<g[start].size();++i)
    {
        if(vis[g[start][i]]==false)
        {
            dfs1(g[start][i],g,vis,N);
        }
    }
}
vector <int> dfs(vector<int> g[], int N)
{
    res.clear();
    bool vis[N]={false};
    dfs1(0,g,vis,N);
    return res;
    // Your code here

}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends