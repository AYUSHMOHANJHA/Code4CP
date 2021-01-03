#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N,M;
cin>>N>>M;
ll arr1[N]={0},sum1=0,arr2[M]={0},sum2=0;
for(ll i=0;i<N;i++){cin>>arr1[i];
    sum1+=arr1[i];
}
for(ll i=0;i<M;i++){cin>>arr2[i];
    sum2+=arr2[i];
}
sort(arr1,arr1+N);
sort(arr2,arr2+M);
ll i=0,j=M-1,count=0;
if((sum1>sum2))cout<<0<<endl;
else{
while((sum1<=sum2) && (i<N ) && (j>=0) && arr1[i]!=arr2[j]){
    sum1=(sum1-arr1[i])+arr2[j];
    sum2=(sum2-arr2[j])+arr1[i];
    i++;
    j--;
    count++;
}
if(sum1>sum2){cout<<count<<endl;
}
else cout<<-1<<endl;
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