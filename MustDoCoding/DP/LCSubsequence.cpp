#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="abcdaf";
    string s2="acbcf";
    int m=s1.size(),n=s2.size();

    int arr[m+1][n+1]={0},result=0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
           if(i==0 || j==0)arr[i][j]=0;
           else if(s1[i-1]==s2[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
                //cout<<arr[i][j]<<endl;
            }
            else arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
        }
    }
    cout<<arr[m][n]<<endl;

    return 0;
}