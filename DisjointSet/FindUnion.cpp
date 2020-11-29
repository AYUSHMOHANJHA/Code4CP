//Time Complexity : O(E.V)

#include<bits/stdc++.h>
using namespace std;

vector<int>parent;
int find(int v)
{
    if(parent[v]==-1)
        return v;
    return find(parent[v]);
}
void union_op(int startAbsRoot,int endAbsRoot)
{
    parent[startAbsRoot]=endAbsRoot;
}
bool isCycle(vector<pair<int,int>>& edge_List)
{
    for(auto node:edge_List)
    {
        int startAbsRoot = find(node.first);  //Find Absolute root
        int endAbsRoot = find(node.second);
        if(startAbsRoot == endAbsRoot)
            return true;
        
        union_op(startAbsRoot,endAbsRoot);
    }
    return false;
}
int main()
{
    int E,V;
    cin>>E>>V;

    parent.resize(V,-1);
    vector<pair<int,int>>edge_List;
    for(int i=0;i<E;++i)
    {
        int start,end;
        cin>>start>>end;
        edge_List.push_back({start,end});
    }
    if(isCycle(edge_List))
        cout<<"True\n";
    else 
        cout<<"False\n";

    return 0;
}