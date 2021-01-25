
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

ll arr[10000002]={0};
vector<ll>v;
void sol(){
    ll n;
    cin>>n;
 
    if(n<=4)cout<<0<<endl;
    else if(n>=5 && n<=6)cout<<1<<endl;
    else{
        int count =0,i=0;
        while(n>=v[i]){
            if(arr[(2+v[i])]==0)count++;
        i++;
        }
        cout<<count<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    v.clear();
    for(ll i=2;(i*i)<=10000001;i++)
    {
        if(arr[i]==0)
        {
            for(ll j=i*i;j<=10000001;j=j+i)
            {
                    arr[j]=1;
            }
        }
    }

    for(ll i=2;i<=10000001;i++){
        if(arr[i]==0)
            v.push_back(i);
    }

    ll T;
    cin>>T;
    while(T--){
        sol();
    }
    return 0;
}