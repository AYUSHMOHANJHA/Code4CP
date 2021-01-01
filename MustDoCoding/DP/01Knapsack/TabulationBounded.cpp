//Time Complexity : O(2^n)
//0-1 Knapsack Recursive bounded 

#include<bits/stdc++.h>
using namespace std;

int knapsack(int W,int wt[],int val[],int n)
{
   int d[n+1][W+1];
   for(int i=0;i<=n;i++){
       for(int j=0;j<=W;j++){
           if(i==0||j==0)d[i][j]=0;
           else if(wt[i-1]>j)d[i][j]=d[i-1][j];
           else d[i][j]=max(d[i-1][j],(val[i-1]+d[i-1][j-wt[i-1]]));
       }
   }
   return d[n][W];
}
int main()
{
    int Weight[] = {4,5,1};
    int Profit[] = {1,2,3};
    int n = sizeof(Weight)/sizeof(Weight[0]);
    int W = 4;
    cout<<knapsack(W,Weight,Profit,n)<<endl;
    return 0;
}