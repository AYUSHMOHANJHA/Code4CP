//SEDARR
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N=0,K=0,sum=0;
cin>>N>>K;
int val=0;
for(ll i=0;i<N;i++){cin>>val;
    sum+=val;
}   
if((sum%K)!=0){cout<<1<<endl;
}else cout<<0<<endl;
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