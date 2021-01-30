
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
int N,K;
cin>>N>>K;
int arr[N]={0};
for(int i=0;i<N;i++)cin>>arr[i];
ll sum=0;
for(int i=0;i<N;i++)sum+=arr[i];

int flag=0;
for(int i=0;i<N;i++){
    if(arr[i]%K!=0){

        if(sum%K==0){
            //for(int j=0;i<N;i++)sum+=arr[i];
            int t=arr[i];
            arr[i]=sum;
            sum = sum + (sum-t);
            cout<<sum<<endl;
            continue;
        }
        else {
            flag=1;
            break;
        }
    }
}
if(flag==0)cout<<"YES"<<endl;
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