
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){

ll N;
cin>>N;
//if(N>=4041){
    //ll c = N/2020;
    ll rem = N%2021;
    ll rem1 = N%2020;
    //cout<<rem << rem1<<endl;
    if(rem == 0 || rem1==0 || (rem>1 && rem1==1))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
//}
//else 

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