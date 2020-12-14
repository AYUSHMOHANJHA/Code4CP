/*
https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
Time Complexity:- O(N)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N]={0};
    for(int i=0;i<N;i++)cin>>arr[i];
    int max_so_far=arr[0],max_ending_here=arr[0];

    for(int i=1;i<N;i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if(max_so_far<max_ending_here)
            max_so_far = max_ending_here;
        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<<max_so_far<<endl;
    return 0;
}