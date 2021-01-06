#include <bits/stdc++.h> 
using namespace std; 
 vector<int>s;
void printAllSubsetsRec(vector<int>&arr, int n, vector<int> v,int sum) 
{ 
    //call
    if (sum==0) { 
        for (auto x : v) {
            s.push_back(x);
            cout<<x<<" ";
        } 
        cout<<endl;
        return; 
    } 
    if(n==0)return ;
    printAllSubsetsRec(arr, n - 1, v, sum); 
    v.push_back(arr[n - 1]); 
    printAllSubsetsRec(arr, n - 1, v, sum - arr[n - 1]); 
} 
void printAllSubsets(vector<int>arr, int n, int sum) 
{ 
    vector<int> v; 
    printAllSubsetsRec(arr, n, v, sum); 
} 
int main() 
{ 
    vector<int>arr;
    int N,count=0;
    cin>>N;
        int sum,sum1;
    cin>>sum;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    printAllSubsets(arr, N, sum); 
    count=s.size();
    cout<<count<<endl;
    // for (auto x : s) {
    //     arr.erase(find(arr.begin(),arr.end(),x));
    //     } 
    // sort(arr.begin(),arr.end());
    // int secondSum=0,count1=0,flag=0;
    // for(int i=arr.size()-1;i>=0;--i){
    //     if(secondSum<=sum){secondSum+=arr[i];
    //     count1++;}
    //     else flag=1;
    // }
    // if(flag==1)count+=count1;
    //cout<<count<<endl;
    return 0; 
} 