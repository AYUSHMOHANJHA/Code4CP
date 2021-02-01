
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll x,y,z;
cin>>x>>y>>z;

if(((x+y)==z)||((x+z)==y)||((z+y)==x))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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