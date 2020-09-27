/*
Largest Sum Contiguous Subarray
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    //int a[] = {-2,-3,4,-1,-2,1,5,-3};
    int T=0;
    cin>>T;
    while(T--){
    int N,val=0;
    cin>>N;
    
    vector<int>a;
    for(int i=0;i<N;i++){
        cin>>val;
        a.push_back(val);
    }
    int max_so_far = a[0], max_end =a[0];
    //int l = sizeof(a)/sizeof(int);
    //cout<<l<<endl;
    for(int i=1; i<N;i++){
        max_end = max( max_end+a[i] ,  a[i]);
        max_so_far = max(max_end,max_so_far);
        // if(max_end < 0){
        //    max_end=0; 
        // }
        // else{
            // if(max_so_far < max_end){
            //     max_so_far = max_end;
            // }
       // }
    }
    cout<<max_so_far<<endl;
    }
    return 0;
}