// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
  long long gcd(long long a, long long b){
      
      if(b==0)
        return a;
    return gcd(b,a%b);
  }
  long long lcm(long long a, long long b){
      return ((a*b)/gcd(a,b));
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
       
      vector<long long>r;
      r.push_back(lcm(A,B));
      r.push_back(gcd(A,B));
      return r;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends