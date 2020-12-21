
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    ll x,y,k,N;
    cin>>x>>y>>k>>N;
    if((abs(x-y)/k)%2==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
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