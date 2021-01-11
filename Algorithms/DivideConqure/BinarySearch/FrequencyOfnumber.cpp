//O(Logn)
//O(1)

#include<bits/stdc++.h>

using namespace std;

class Solution{
public:	
	int binary(int arr[],int n,int x){
	   int l=0,r=n-1;
	   int count =0;
	   while(l<=r){
	       int mid= (l+(r-l)/2);
	       if(arr[mid]==x) return mid;
	       if(arr[mid]>x)r=mid-1;
	       else l=mid+1;
	   }
	   return -1;
	}
	
	int count(int arr[], int n, int x) {
        int index = binary(arr,n,x);
        int count=1;
        if(index == -1)return 0;
        else{
            int left =index-1;
            while(arr[left]==x && left>=0)
                count++, left--;
            
            int right = index+1;
            while(arr[right]==x && right<n)
                count++, right++;
        
            
            return count;
            
        }
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}