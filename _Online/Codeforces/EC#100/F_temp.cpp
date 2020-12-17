
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,temp=0,count=0;
    cin>>n>>x>>y;
    vector<long long int>arr;
    if(x>y)temp=y;
    else temp=x;
    for(long long int i=1;i<=n;i++)
    {
        if(arr[abs(i-x)]!=1 && arr[abs(i-y)]!=1) {
            count++;
           // std::cout<<i<<" ";
            arr[i]=1;
        }
    }
    std::cout<<count<<endl;
    arr.clear();
    return 0;
}