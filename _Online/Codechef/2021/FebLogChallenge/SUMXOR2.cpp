
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){

ll N,Q;
cin>>N;
ll val[N]={0};
for(auto &i:val)cin>>i;
for(auto a:val)cout<<__builtin_popcount(a)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    ll T;
    cin>>T;
    while(T--){
        sol();
    }
    return 0;
}