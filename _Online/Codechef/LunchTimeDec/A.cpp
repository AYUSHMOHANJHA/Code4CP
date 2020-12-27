
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    string s;
    cin>>s;
    if(s.size()<3)cout<<0<<endl;
    else{
    int arr[26]={0};
    for(ll i=0;i<s.size();i++)
        arr[s[i]-'a']++;
    int c=0,total=s.size();
    for(ll i=0;i<26;i++)
        {   
            for(ll j=0;j<26;j++){
            if(arr[j]>=2) 
            {
                if((total-2)>=1)
                {    c++;
                    total=total-3;
                    arr[j]-=2;
                }
            }
          
        }
        }
    cout<<c<<endl;
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