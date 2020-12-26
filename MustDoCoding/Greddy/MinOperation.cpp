/*
Minimum Operations 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int minOperation(int n)   // Greedy Approch
    {
        int count =0;
        while(n){
        if(n%2==0)
            n=n/2;
        else
            n=n-1;
        count++;
        }
        return count;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
} 