/*
https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/tutorial/

Edge Existence

You have been given an undirected graph consisting of N nodes and M edges. This graph can consist of self-loops as well as multiple edges. In addition , you have also been given Q queries. For each query , you shall be given 2 integers A and B. You just need to find if there exists an edge between node A and node B. If yes, print "YES" (without quotes) else , print "NO"(without quotes).

Input Format:

The first line consist of 2 integers N and M denoting the number of nodes and edges respectively. Each of the next M lines consist of 2 integers A and B denoting an undirected edge between node A and B. The next line contains a single integer Q denoting the number of queries. The next Line contains 2 integers A and B denoting the details of the query.

Output Format

Print Q lines, the answer to each query on a new line. */

#include<bits/stdc++.h>
using namespace std;

int matrix[1001][1001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int i,M,N,q,a,b;
    cin>>N>>M;
    for(i = 1;i<=M;i++){
        cin>>a>>b;
        matrix[a][b]=1;
        matrix[b][a]=1;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b;
        if(matrix[a][b]==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}