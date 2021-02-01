
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
int N;
cin>>N;
int arr[N]={0};
for(int i=0;i<N;i++)cin>>arr[i];
int count=0,nE=0,nO=0;
for(int i=0;i<N;i++){
    if(arr[i]%2==0)nE++;
    else nO++;
}
// for(int i=0;i<N-1;i++)
// {
//     int next=i+1;
//     if((arr[i]-arr[next])%2!=0)
//          {arr[next]+=1;
//          count++;
//          }
//     //if(((arr[i]%2!=0)&&arr[next]%2==0) || ((arr[i]%2==0)&&arr[next]%2!=0))count++;
// }
if(nE>0 && nO>0 )cout<<min(nE,nO)<<endl;
else cout<<0<<endl;
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