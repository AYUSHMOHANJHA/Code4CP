
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int equalPartition(int n, int A[])
    {
            int sum=0;
    for(int i=0;i<n;++i)
        sum+=A[i];
    
    if(sum%2!=0)return false;
    
    bool dp[n+1][sum/2+1];
    for(int i=0;i<=n;++i)
    for(int j=0;j<=sum/2;++j)
    {
        if(j==0)
            dp[i][j] = true;
        else if(i==0)
            dp[i][j] = false;
        else if(A[i-1]>j)
            dp[i][j] = dp[i-1][j];
        else
            dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
    }
    return dp[n][sum/2];
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
} 