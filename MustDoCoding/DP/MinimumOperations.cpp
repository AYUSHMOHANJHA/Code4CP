/*
Minimum Operations 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    // int minOperation(int n)   // Greedy Approch
    // {
    //     int count =0;
    //     while(n){
    //     if(n%2==0)
    //         n=n/2;
    //     else
    //         n=n-1;
    //     count++;
    //     }
    //     return count;
    // }
    int minOperation(int n)
    {
        int count =0;
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
                dp[i]=dp[i/2]+1;
            else
                dp[i]=dp[i-1]+1;
        }
        
        return dp[n];
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
} 