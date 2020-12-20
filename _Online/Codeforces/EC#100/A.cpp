
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,sum=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        if((sum-2)%7==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}