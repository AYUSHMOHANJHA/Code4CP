
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007


int isSum( int S[], int m, int n ) 
{ 
    int table[n+1]; 
    memset(table, 0, sizeof(table)); 
    table[0] = 1; 
    for(int i=0; i<m; i++) 
        for(int j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 

    return table[n]; 
} 

void sol(){
ll q,d;
cin>>q>>d;
    int s = 100000;
    int temp[s]={0};
    int num=d;
    //vector<ll>v;
    for(int i=0;i<s;i++){
        temp[i]=num;
        //v.push_back(num);
        num=num+10;
    }
    // for(ll i=0;i<s;i++)cout<<temp[i]<<" ";
    // cout<<endl;
    // cout<<j<<endl;
 for(ll i=0;i<q;i++){
    ll N;
    cin>>N;
    int j=0;

    if(isSum(temp,s,N)>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
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