#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;

    for(int i=7;i>=0;--i)
    {
        if((N & (1<<i))!=0)
            cout<<1;
        else
            cout<<0;
        
    }
    return 0;
}