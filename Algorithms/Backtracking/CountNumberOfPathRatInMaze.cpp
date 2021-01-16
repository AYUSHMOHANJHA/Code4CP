// TC: O(R*C)
// SC: O(R*C)

#include<bits/stdc++.h>
using namespace std;

int CountPath(int** arr,int n){
    int R=n,C=n;
    if(arr[0][0]==-1)return 0;
    //for leftmost column
    for(int i=0;i<R;i++){
        if(arr[i][0]==0)arr[i][0]=1;
        else break;                 //if we encounter blocked cell
    }
    //for rightmost column
    for(int i=1;i<C;i++){
        if(arr[0][i]==0)arr[0][i]=1;
        else break;                 //if we encounter blocked cell
    }
    for(int i=1;i<R;i++){
        for(int j=1;j<C;j++){
            if(arr[i][j]==-1)continue;
            if(arr[i-1][j]>0)arr[i][j]=arr[i][j]+arr[i-1][j];
            if(arr[i][j-1]>0)arr[i][j]=arr[i][j]+arr[i][j-1];
        }
    }
    return (arr[R-1][C-1]>0)?arr[R-1][C-1] : 0;
}

int main(){

    int n;
    cin>>n;

    int **arr = new int*[n];

    for(int i=0;i<n;i++){
        arr[i]= new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int **solArr = new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]= new int[n];
      for(int j=0;j<n;j++){
            solArr[i][j]=0;
        }
    }
    int res=CountPath(arr,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
        }cout<<endl;
        }
        cout<<res<<endl;
}
/*
4
0 0 0 0
0 -1 0 0 
-1 0 0 0 
0 0 0 0 

1 1 1 1 
1 -1 1 2 
-1 0 1 3 
0 0 1 4 

4

*/