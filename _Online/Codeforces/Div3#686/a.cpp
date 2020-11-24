//https://codeforces.com/contest/1454/problem/A
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
const int mod = 1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
    cin>>t;
	while(t--) {
        int N;
        cin>>N;
        int arr[N+1]={0},mid = ceil(N/2)+1;;
        
        if(N%2!=0) { 
        for(int i =1;i<=N;i++)
            { 
              if(i==mid)arr[i]=i-1;
              else if(i==(mid+1))arr[i]=i-1;
              else arr[i]=(N+1)-i;
            }}
        else
        {
            for(int i =1;i<=N;i++)
            {
             arr[i]=(N+1)-i;
            }
        }
        
        
        for(int i=1;i<=N;i++)
        {
         
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
}