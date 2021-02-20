
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    ll N;
    cin>>N;
    int l=1;
    for(int i=2;i<=10;i++){
        if(N%i==0)l=i;
    }
    cout<<l<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 

        sol();
    return 0;
}