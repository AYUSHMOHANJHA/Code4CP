#include <bits/stdc++.h> 
using namespace std; 
 vector<int>s;
 int flag=0;
void printAllSubsetsRec(vector<int>&arr, int n, vector<int> v,int sum) 
{ 
    //call
    if (sum==0 && flag==0) { 
        for (auto x : v) {
            s.push_back(x);
            arr[(find(arr.begin(),arr.end(),x)-arr.begin())]=0;
            flag=1;
        } 
        return; 
    } 
    if(n==0)return ;
    printAllSubsetsRec(arr, n - 1, v, sum); 
    v.push_back(arr[n - 1]); 
    printAllSubsetsRec(arr, n - 1, v, sum - arr[n - 1]); 
} 
void printAllSubsets(vector<int>&arr, int n, int sum) 
{ 
    vector<int> v; 
    printAllSubsetsRec(arr, n, v, sum); 
} 
int main() 
{ 
    int T=0;
    cin>>T;
    while(T--){
        s.clear();
    int result=0;
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
    flag=0;
    count=s.size();
    if(count>0)result=1;
    //cout<<count<<endl;
    // for (auto x : arr) {
    //     cout<<x<<" ";
    //     } 
    //     cout<<endl;
        s.clear();
    printAllSubsets(arr, N, sum); 
    flag=0;
    if(s.size()>0){
        if(result==1)result=2;
        else result=1;
    }
    count=count+s.size();
    // cout<<count<<endl;
    // for (auto x : arr) {
    //     cout<<x<<" ";
    //     } 
    //     cout<<endl;
       s.clear();
if(result==2)cout<<count<<endl;   //Result
else{
    if(result==1){
    int secondSum=0,c=0;
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=0;--i){
        if(secondSum<=sum){secondSum+=arr[i];
        c++;
        }
        else break;
    }
    if(secondSum>=sum){count+=c;
    result=2;}
    cout<<count<<endl;     //Result
    }
    else{

    int secondSum=0,c=0;
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>=0;--i){
        if(secondSum<=sum){secondSum+=arr[i];
        c++;
        }
        else break;
    }
    if(secondSum>=sum){count+=c;
    result=1;}
    secondSum=0;
    int c1=0;
        for(int i=arr.size()-1-c;i>=0;--i){
        if(secondSum<=sum){secondSum+=arr[i];
        c1++;
        }
        else break;
        }
         if(secondSum>=sum){count+=c1;
         result=2;}
    cout<<count<<endl;    //RESULT
    }
    }
    if(result!=2)cout<<-1<<endl;   //IMpossible
    }
    return 0; 
} 