//Time Complexity : O(2^n)
//0-1 Knapsack Recursive bounded 

#include<bits/stdc++.h>
using namespace std;

int knapsack(int W,int Weight[],int Profit[],int n)
{
    if(n==0 || W==0)return 0;
    if(Weight[n-1]>W) return knapsack(W,Weight,Profit,n-1);
    else return max(knapsack(W,Weight,Profit,n-1),(Profit[n-1]+knapsack(W-Weight[n-1],Weight,Profit,n-1)));
}
int main()
{
    int Weight[] = {10,20,30};
    int Profit[] = {60,100,120};
    int n = sizeof(Weight)/sizeof(Weight[0]);
    int W = 50;
    cout<<knapsack(W,Weight,Profit,n)<<endl;
    return 0;
}