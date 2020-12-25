
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
    string s;
    cin>>s;
    ll one=0;
    ll len = s.size();
   if((len%2)==0){
       for(ll i=0;i<len;i++){
           if(s[i]=='1')one++;
       }
       if(one == (len-one))cout<<0<<endl;
       else if((one==len) || one == 0)cout<<-1<<endl;
      else {
          if((len/2)>one)cout<<abs((len/2)-one) <<endl;
      }
   }
   else cout<<-1<<endl;
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