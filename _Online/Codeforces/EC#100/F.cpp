
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,y,temp=0;
    cin>>n>>x>>y;
    set <long long int>s;
    long long int arr[n+1]={};
    if(x>y)temp=y;
    else temp=x;
    for(long long int i=1;i<=(n);i++)
    {
        if(i<=temp)
           { s.insert(i);
           arr[i]=1;
           }
        else
        {
          if(arr[abs(i-x)]!=1 && arr[abs(i-y)]!=1) {
              arr[i]=1;
          s.insert(i);}
        }
    }
    cout<<s.size()<<endl;
    return 0;
}