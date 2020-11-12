// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){

    int arr_c[26]={0};
    int arr_d[26]={0};
    
    for(int i=0;i<c.size();i++)
    {
        arr_c[((int)c[i]-97)] = 1;
    }
    for(int i=0;i<d.size();i++)
    {
        arr_d[((int)d[i]-97)] = 1;
    }
    
    for(int i=0;i<26;i++)
    {
        if(arr_c[i]!=arr_d[i])
        {
            return false;
        }
    }
    if(c.size()!=d.size())
        return false;
    else
        return true;
}


// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;

        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends