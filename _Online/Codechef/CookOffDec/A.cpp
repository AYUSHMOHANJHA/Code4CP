
#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void sol(){
ll N,count=0,B=0;
string s;
cin>>N;
cin>>s;
for(ll i =0;i<N;i++){
    if(s[i]=='1')count++;
    }
    //cout<<count<<endl;
    //cout<<(100*(((120-N)+count)))/120<<endl;
    if(((100*(((120-N)+count)))/120)>=75)cout<<"YES"<<endl;
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