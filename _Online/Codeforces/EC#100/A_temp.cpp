
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,sum=0,res=0,min=0;
        cin>>a>>b>>c;
        sum=a+b+c;
        res=sum/9;
        if((std::min({a,b,c})>=res) && ((sum)%9)==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}