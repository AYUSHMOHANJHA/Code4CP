/*

    Time Complexity: O(n2).
    As nested loop is used.
    Auxiliary Space: O(n).
    Use of any array to store LIS values at each index.

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {59,93,22,84,42,61,92,7,38}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int lis[n]={1},a=0, c=0;
    lis[0]=1;
    
    for(int i=1;i<n;i++)
    {
        lis[i]=1;   
        for(int j=0;j<i;j++){
        if(arr[j]<arr[i] && lis[i]<lis[j]+1){
            lis[i]=lis[j]+1;
        }
        }
    }
    
    // for(int i=0;i<n;i++)
    // {   
    // cout<<lis[i]<<" ";
    // }cout<<endl;
    cout<<*max_element(lis,lis+n)<<endl;
    return 0;
}