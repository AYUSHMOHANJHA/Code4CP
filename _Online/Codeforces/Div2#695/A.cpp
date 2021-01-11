
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll n;
cin>>n;
int val=0,flag=0,count=0;
if(n==1)cout<<9;
else if(n==2)cout<<98;
else if(n==3)cout<<989;
else{
cout<<989;
for(int i=3;i<n;i++)
{
    if(flag==0){
        cout<<val;
        val++;
    }
    if(val==10){flag=0;val=0;count=1;}
}
}
cout<<endl;
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