
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N,K,D,Sum=0;
cin>>N>>K>>D;
ll A[N]={0};
for(int i=0;i<N;i++){cin>>A[i];
    Sum+=A[i];}
if((int)(Sum/K)<=D)cout<<(int)(Sum/K)<<endl;
else cout<<D<<endl;
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