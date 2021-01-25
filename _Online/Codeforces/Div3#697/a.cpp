
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

bool Two(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
void sol(){
ll N;
cin>>N;
if(Two(N))cout<<"NO"<<endl;
else cout<<"YES"<<endl;
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