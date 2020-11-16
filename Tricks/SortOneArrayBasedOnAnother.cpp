/*
MMI for Activity selection sorted finish_time 

basically this program is for sort an array based on array
*/
#include<bits/stdc++.h>

using namespace std;

void pairsort(int *a, char *b, int n)
{
       
    pair<int,char>s[n];

    for(int i=0;i<n;i++)
    {
        s[i].first=a[i];
        s[i].second=b[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        a[i] = s[i].first;
        b[i] = s[i].second;    
    }
   
  
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}

int main()
{
    int a[] = {2,1,5,4};
    char b[] = {'A','B','C','D'};

    int n = sizeof(a)/sizeof(a[0]);

    pairsort(a,b,n);

}