/*
Time Complexity:- O(N)
https://www.geeksforgeeks.org/window-sliding-technique/
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        int arr[N]={0};
        for(int i=0;i<N;i++)
            cin>>arr[i];
        
        int max_sum=0;
        for(int i=0;i<K;i++)
            max_sum += arr[i];
        
        int window_sum  = max_sum;
        for(int i=K;i<N;i++)
        {
            window_sum += arr[i] - arr[i-K];
            max_sum = max(max_sum,window_sum);
        }
    cout<<max_sum<<endl;
    }
    return 0;
}