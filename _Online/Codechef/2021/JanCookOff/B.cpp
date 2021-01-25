
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    string s;
    cin>>s;
    int size = s.length();
    int f1=0,f2=0,f3=0,f4=0;
    if(size>=10){
        for(int i=0;i<size;i++){
            if(s[i]>='a' && s[i]<='z')
                f1=1;
        }
        for(int i=1;i<size-1;i++){
            if(s[i]>='A' && s[i]<='Z')
                f2=1;
        }
        for(int i=1;i<size-1;i++){
            if(s[i]>='0' && s[i]<='9')
                f3=1;
        }
        for(int i=1;i<size-1;i++){
            if(s[i]=='@' || s[i]=='#'|| s[i]=='%' || s[i]=='&'|| s[i]=='?' )
                f4=1;
        } 
    }
    //cout<<flag<<endl;
    if(f1==1 && f2==1 && f3==1 && f4==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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