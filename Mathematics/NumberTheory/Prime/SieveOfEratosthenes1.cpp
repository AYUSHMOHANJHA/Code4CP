//Time optimized approach 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    for(int i=2;(i*i)<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                    arr[j]=1;
            }
        }
    }
    vector<int>v;
    for(int i=2;i<=n;i++){
        if(arr[i]==0)
            v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}