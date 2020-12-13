/*
Given an array of integers of size ‘n’.
Our aim is to calculate the maximum sum of ‘k’ 
consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}
         k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}
         k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23}
of size 4.

Input  : arr[] = {2, 3}
         k = 3
Output : Invalid
There is no subarray of size 3 as size of whole
array is 2.
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,S,K;
        cin>>N>>K;
        
        int arr[N]={0};
        int curr_sum=0,max_sum=INT_MIN;
        for(int i=0;i<N;i++)
            cin>>arr[i];
        for(int i=0;i<N-K+1;i++)
        {curr_sum=0;
        for(int j=0;j<K;j++)
        {
            curr_sum = curr_sum + arr[i+j];
        }
            max_sum = max(curr_sum,max_sum);
        }
        cout<<max_sum<<endl;
    }

    return 0;
}