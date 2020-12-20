
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int V,H,O,ans=0;
    cin>>V>>H>>O;
    for(long long int i=0;i<O;i++)
    {
        long long int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        ans= ans+ abs(x1-x2) + abs(y2-y1)*2;
    }
    cout<<ans<<endl;
    return 0;
}