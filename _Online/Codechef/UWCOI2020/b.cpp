
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        if(N==1)cout<<1<<" "<<1<<endl;
        else {
            if((N%2)==0)cout<<2<<" "<<N/2<<endl;
            else if ((N%3)==0)cout<<3<<" "<<N/3<<endl;
            else cout<<1<<" "<<N<<endl;
        }
    }
    return 0;
}