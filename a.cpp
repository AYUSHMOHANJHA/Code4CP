#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])a[i]=1;
    }
    return 0;
}