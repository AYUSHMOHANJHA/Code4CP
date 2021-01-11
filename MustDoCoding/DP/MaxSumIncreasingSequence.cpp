/*

    Time Complexity: O(n2).
    As nested loop is used.
    Auxiliary Space: O(n).
    Application of LIS 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,101,2,3,100}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int mis[n]={0},a=0, c=0;
    for(int i=0;i<n;i++)mis[i]=arr[i];
    for(int i=1;i<n;i++)
    {    
        for(int j=0;j<i;j++){
        if(arr[j]<arr[i] && mis[i]<mis[j]+arr[i]){
            mis[i]=mis[j]+arr[i];
        }
        }
    }
    cout<<*max_element(mis,mis+n)<<endl;
    return 0;
}