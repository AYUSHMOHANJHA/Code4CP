//https://codeforces.com/problemset/problem/71/A
// Ayush Mohan Jha

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    string s;
    cin>>s;
    if(s.size()>10)cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
    else cout<<s<<endl;
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