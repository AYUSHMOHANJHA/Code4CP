//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="saturday";
    string s2="sunday";
    int n=s1.size();
    int m=s2.size();
    int d[n+1][m+1];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)d[i][j]=j;
            else if(j==0)d[i][j]=i;
            else if(s1[i-1]==s2[j-1])d[i][j]=d[i-1][j-1];
            else d[i][j]=1 + min(min(d[i-1][j],d[i][j-1]),d[i-1][j-1]);
        }
    }
    cout<<d[n][m]<<endl;
    return 0;
}