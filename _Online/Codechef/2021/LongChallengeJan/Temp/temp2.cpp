#include <bits/stdc++.h> 
using namespace std; 

bool** dp; 
  
void display(vector<int>&arr,const vector<int>& v) 
{ 
    for (int i = 0; i < v.size(); ++i) {
        arr.erase(find(arr.begin(),arr.end(),v[i]));
        printf("%d ", v[i]); 
    }
    printf("------\n"); 
    for (int i = 0; i < arr.size(); ++i) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
} 
 
void printSubsetsRec(vector<int>&arr, int i, int sum, vector<int>& p) 
{ 

    if (i == 0 && sum != 0 && dp[0][sum]) 
    { 
        p.push_back(arr[i]); 
        display(arr,p); 
        return; 
    } 
    if (i == 0 && sum == 0) 
    { 
        display(arr,p); 
        return; 
    } 
    if (dp[i-1][sum]) 
    { 
        vector<int> b = p; 
        printSubsetsRec(arr, i-1, sum, b); 
    } 
  
    if (sum >= arr[i] && dp[i-1][sum-arr[i]]) 
    { 
        p.push_back(arr[i]); 
        printSubsetsRec(arr, i-1, sum-arr[i], p); 
    } 
} 

void printAllSubsets(vector<int>&arr, int n, int sum) 
{ 
    if (n == 0 || sum < 0) 
       return; 
    dp = new bool*[n]; 
    for (int i=0; i<n; ++i) 
    { 
        dp[i] = new bool[sum + 1]; 
        dp[i][0] = true; 
    } 
 
    if (arr[0] <= sum) 
       dp[0][arr[0]] = true; 
 
    for (int i = 1; i < n; ++i) 
        for (int j = 0; j < sum + 1; ++j) 
            dp[i][j] = (arr[i] <= j) ? dp[i-1][j] || 
                                       dp[i-1][j-arr[i]] 
                                     : dp[i - 1][j]; 
    if (dp[n-1][sum] == false) 
    { 
        printf("There are no subsets with sum %d\n", sum); 
        return; 
    } 
    vector<int> p; 
    printSubsetsRec(arr, n-1, sum, p); 
} 
  
// Driver code 
int main() 
{ 
    vector<int>V;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        V.push_back(a);
    }

    int sum;
    cin>>sum;
    printAllSubsets(V, N, sum); 
    return 0; 
} 