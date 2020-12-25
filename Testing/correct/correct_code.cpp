//https://codeforces.com/problemset/problem/4/A
// Ayush Mohan Jha

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007


int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    ll N;
    cin>>N;
    if(N==2)cout<<"NO"<<endl;
    else N%2==0 ? cout<<"YES"<<endl:cout<<"NO"<<endl;
    
    return 0;
}