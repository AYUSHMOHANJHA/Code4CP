/*Two Pointers Technique*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int a [] = {1,2,3,4,5,6,7,8,9,10};
    int s = sizeof(a)/sizeof(int);
   
    int X=0;
    cin>>X;

    int i = 0;
    int j = s-1;

    int flag = 0;

    while(i<j){
        //cout<<i<<"-"<<j<<endl;
        if((a[i]+a[j])==X){
            flag=1;
            break;
        }
        else if((a[i]+a[j]) < X)
            i++;
        else
            j--;
    }
        if(flag==0) 
            cout<<"Not Found"<<endl;
        else 
            cout<<"Found"<<endl;

    return 0;
}