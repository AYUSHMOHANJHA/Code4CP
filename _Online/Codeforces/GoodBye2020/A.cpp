
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N;
cin>>N;
if(N==1)cout<<1<<endl;
else{
int arr[N]={0};
int hash[1000000]={0};
for(int i=0;i<N;++i){cin>>arr[i];
hash[arr[i]]++;
}
set<int>s;
for(int i=0;i<N;++i)
    s.insert(arr[i]);

int result=s.size();
// for(int i=0;i<1000000;i++){
//     if(hash[i]>=1){
//         if(s.count(i+1)==false)result++;
//     }
// }
for(int i=0;i<N;++i)
{
    if((s.count(arr[i]+1)==false) || (s.count(arr[++i]+1)==false)){
           result++;
           s.insert(arr[i]+1);
        
    }
}
cout<<result<<endl;
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