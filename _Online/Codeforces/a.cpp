
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
string s;
cin>>s;
int a=0,b=1;
    for(int i=0;i<s.size();i++){
        if(i==a){
            if(s[i]=='a')s[i]='b';
            else s[i]='a';
        }
        else{
            if(s[i]=='z')s[i]='y';
            else s[i]='z';
            a=a+2;
        }
    }
    cout<<s<<endl;
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