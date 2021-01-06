#include <bits/stdc++.h> 
using namespace std; 
 // set<int>s;
void printAllSubsetsRec(vector<int>&arr, int n, vector<int> v,int sum) 
{ 
    //call
    if(n>arr.size() || arr.size()==0 || n<0)return ;
    cout<<"N:-----"<<n<<"  Size:----"<<arr.size()<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"-------"<<endl;
    if (sum <=0 && n>=0) { 
        for (auto x : v) {
            arr[find(arr.begin(),arr.end(),x)-arr.begin()]=0;
        // arr.erase(find(arr.begin(),arr.end(),x));
           // cout << x << " ";
        } 
       // cout << endl; 
        return; 
    } 
    // if (n< 0) 
    //     return; 
   // if(n>arr.size() || arr.size()==0 || n<0)return ;
    
    printAllSubsetsRec(arr, n - 1, v, sum); 
    //if(arr.size()>0){
        v.push_back(arr[n - 1]); 
    printAllSubsetsRec(arr, n - 1, v, sum - arr[n - 1]); 
    //}else return;
} 
  
// Wrapper over printAllSubsetsRec() 
void printAllSubsets(vector<int>arr, int n, int sum) 
{ 
    vector<int> v; 
    printAllSubsetsRec(arr, n, v, sum); 
} 
  
// Driver code 
int main() 
{ 
    vector<int>arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    int sum,sum1;
    cin>>sum;
    printAllSubsets(arr, N, sum); 
    //cout<<s.size()<<endl;
    for (auto x : arr) {
         cout << x << " ";
        } 
    return 0; 
} 