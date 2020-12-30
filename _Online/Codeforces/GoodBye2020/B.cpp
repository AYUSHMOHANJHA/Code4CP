
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
ll N;
cin>>N;
int arr[N]={0};

for(int i=0;i<N;i++)
    cin>>arr[i];

set<int>s;
for(int i=0;i<N;i++)
{
    for(int j=0;j<N;j++)
    {
        if(i!=j)
        s.insert(abs(arr[i]-arr[j]));
    }
}
cout<<s.size()<<endl;
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