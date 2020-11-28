#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin>>t;
	while(t--) {
        long long int x,y,n,count=0;
        cin>>x>>y>>n;
        for(long long int i=0;i<=n;i++)
        {
            if((x^i)<(y^i))count++;
        }
        cout<<count<<endl;
    }
    return 0;
}