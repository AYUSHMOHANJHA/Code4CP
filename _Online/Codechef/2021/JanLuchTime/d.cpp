
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
int N;
cin>>N;
int arr[N]={0};
for(int i=0;i<N;i++)cin>>arr[i];
int count=0;
for(int i=0;i<N;i++)
{
    count+=arr[i];
}
//cout<<count<<endl;
if(count%2==0)cout<<1<<endl;
else cout<<2<<endl;

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