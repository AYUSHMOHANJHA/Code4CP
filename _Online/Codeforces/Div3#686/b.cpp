//https://codeforces.com/contest/1454/problem/B

#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
const int mod = 1e9+7;


int main(){
    
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  long long int t = 1;
    cin>>t;
	while(t--) {
        long long int hash[200001]={0};
        long long int N;
        cin>>N;
        long long int arr[N+1]={0};
        for(long long int i=1;i<=N;i++)
            cin>>arr[i];
        for( long long int i=1;i<=N;i++)
            hash[arr[i]]++;

        int index=0,res=0,flag=1;
        for( long long int i=1;i<=N;i++)
        {
            if(hash[arr[i]]==1){
                  res=arr[i];
            break;
            }
        }
        for( long long int i=1;i<=N;i++)
        {
            if(hash[arr[i]]==1){
                flag=0;
                if(res>=arr[i]){index=i;
                res=arr[i];
                }
            }
        }
        if(flag==1)index=-1;
    cout<<index;
    cout<<endl;
    }
}