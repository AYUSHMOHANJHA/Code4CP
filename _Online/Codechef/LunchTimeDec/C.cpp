
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N;
cin>>N;
string s,p;
cin>>s>>p;
ll one=0,one1=0;
int flag=1;
for(ll i = 0;i<N;++i)
{
    if(s[i]=='1')one++;
    if(p[i]=='1'){one1++;
    if(one!=one1){flag=0;
    break;
    }}
    else{
        if(i<N-1)continue;
        else{
        if(one!=one1){flag=0;
        break;
        }
        }
    }
}
if(flag==1)cout<<"Yes"<<endl;
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