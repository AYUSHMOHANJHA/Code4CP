#include<bits/stdc++.h>

using namespace std;

long long int ans=0;
long long int func(long long int N)
{
  //  long long int dp[N+1]={0};
  //  long long int dp_N=0,dp_2=0,dp_3=0,dp_4=0;
    if(N<=11) {
        ans+=N;
        return N;
    }

     return func(N/2)+func(N/3)+func(N/4);
}

int main()
{
    long long int N;
    while(cin>>N)
        cout<<func(N)<<endl;
}