
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll n=0,sum=0,count1=0,count2=0;
cin>>n;
ll arr[n]={0};
for(ll i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==2)count2++;
    else count1++;
    sum+=arr[i];
}
// sort(arr,arr+n);
// ll sum1=arr[0],sum2=arr[n-1],i=1,j=n-2;
// while(i<j)
// {
//     cout<<sum1<<" "<<sum2<<endl;
//     if(sum1<sum2){sum1+=arr[i];
//     i++;}
//     else{
//         sum2+=arr[j];
//         j--;
//     }
    
// }
// cout<<i<<" "<<j<<endl;
// cout<<sum1<<" "<<sum2<<endl;
// if(sum1==sum2)cout<<"yes"<<endl;
// else cout<<"no"<<endl;
if(sum%2==0){
if((count1==0 && ((count2%2)==0))|| (count2==0 && (count1%2)==0) || (count1%2==0 && (count2%2!=0))||(count2%2==0 && (count1%2!=0)))cout<<"yes"<<endl;
}
else cout<<"no"<<endl;
// if((sum%2==0)&&((sum/2)%2==0 || (count1%2==0 && count2%2==0)))cout<<"yes"<<endl;
// else cout<<"no"<<endl;
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