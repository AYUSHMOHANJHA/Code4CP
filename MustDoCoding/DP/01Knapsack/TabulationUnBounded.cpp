#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int knapSack(int n, int W, int val[], int wt[])
    {
        int d[W+1] = {0};
        
        for(int i=0;i<=W;++i){
            for(int j=0;j<n;++j){
                if(wt[j]<=i)d[i]=max(d[i],(val[j]+d[i-wt[j]]));
            }
        }
        return d[W];
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  