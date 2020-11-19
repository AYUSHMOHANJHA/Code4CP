// Find the element that appears once in sorted array
//XOR (a ^ a = 0 & a ^ 0 = a). 
//The idea to find the XOR of the complete array.
#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int res=arr[0];
        for(int i=1;i<n;i++)
        {
            res = res^arr[i];
        }
        return res;
    }
};


int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}  