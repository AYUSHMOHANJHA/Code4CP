
#include<bits/stdc++.h>
#include <cmath> 
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){

int N,K;
cin>>N>>K;
int arr[N]={0};
for(int i=0;i<N;i++)cin>>arr[i];

int count=0;
for(int i=0;i<N;i++){
    if(arr[i]!=-1)count++;
}
// float v= N/2.0;
//cout<<count<<" "<<ceil(((double)N/2))<<endl;

if((count)<ceil(((double)N/2)))cout<<"Rejected"<<endl;
else{
    count=0;
   for(int i=0;i<N;i++)
        if(arr[i]>K)count++;
   if(count>0)cout<<"Too Slow"<<endl;
   else{
       count=0;
       for(int i=0;i<N;i++)
            if(arr[i]==0 || arr[i]==1)count++;
       if(count==N)cout<<"Bot"<<endl;
       else
            cout<<"Accepted"<<endl;
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