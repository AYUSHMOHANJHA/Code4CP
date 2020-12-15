
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
    cin>>t;
	while(t--) {
        int N,t;
        cin>>N;
        int ans=0;
        ans = (N % 9 + 1)* pow(10, (N / 9))- 1;
        t=ans;
        int res=1,rem=0;
        rem = t%10;
        t= t/10;
        res=rem;
        int flag=0;
        while(t){
            rem = t%10;
            t= t/10;
            res^=rem;
            if(res==0)flag=1;
        }
        if(flag==0)cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
}