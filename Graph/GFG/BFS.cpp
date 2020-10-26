/* https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1# */

vector <int> bfs(vector<int> g[], int N) {

    vector<int> res;
    queue<int>q;
    bool vis[N]={false};
    
    q.push(0);
    vis[0]=true;
    while(!q.empty()){
        int curr = q.front();
        //cout<<curr<<" ";
        q.pop();
        res.push_back(curr);
        
        for(int i=0;i<g[curr].size();++i)
        {
            if(vis[g[curr][i]]==false){
                q.push(g[curr][i]);
                vis[g[curr][i]] = true;
            }
        }
    }
    return res;
}