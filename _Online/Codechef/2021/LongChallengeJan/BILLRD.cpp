
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N,K,x,y;
cin>>N>>K>>x>>y;
if(x==y)cout<<N<<" "<<N<<endl;
else{
    int x1[5]={0},y1[5]={0};
    x1[0]=0,y1[0]=0;
    if(x>y){
            x1[1]=N;
            y1[1]=N-abs(x-y);
            x1[2]=N-abs(x1[1]-y1[1]);
            y1[2]=N;
            x1[3]=0;
            y1[3]=abs(x1[2]-y1[2]);
            x1[4]=y1[3];
            y1[4]=0;
    }
    else if(x<y){
            x1[1]=N-abs(x-y);
            y1[1]=N;
            x1[2]=N;
            y1[2]=N-abs(x1[1]-y1[1]);
            x1[3]=abs(x1[2]-y1[2]);
            y1[3]=0;
            x1[4]=0;
            y1[4]=x1[3];
    }
    if(K<=4)cout<<x1[K]<<" "<<y1[K]<<endl;
    else {
        K = K%4;
        if(K==0)K=4;
        cout<<x1[K]<<" "<<y1[K]<<endl;
    } 
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