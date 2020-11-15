
/ { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends

//int COL=0;
//#define ROW 3
#define COL 100
/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
bool ifSafe(vector<int>A[],int x,int y, bool visited[][COL],int row,int col)
{
    return (x>=0 && x<row && y>=0 && y<col && A[x][y] == 1 && !visited[x][y] );
}
void dfs(vector<int>A[],int x,int y,bool visited[][COL],int row,int col)
{
    visited[x][y] = true;

    if(ifSafe(A,x-1,y-1,visited,row,col))
    {
        dfs(A,x-1,y-1,visited,row,col);
    }
    if(ifSafe(A,x-1,y,visited,row,col))
    {
        dfs(A,x-1,y,visited,row,col);
    }
    if(ifSafe(A,x-1,y+1,visited,row,col))
    {
        dfs(A,x-1,y+1,visited,row,col);
    }
    if(ifSafe(A,x,y-1,visited,row,col))
    {
        dfs(A,x,y-1,visited,row,col);
    }
    if(ifSafe(A,x,y+1,visited,row,col))
    {
        dfs(A,x,y+1,visited,row,col);
    }
    if(ifSafe(A,x+1,y-1,visited,row,col))
    {
        dfs(A,x+1,y-1,visited,row,col);
    }
    if(ifSafe(A,x+1,y,visited,row,col))
    {
        dfs(A,x+1,y,visited,row,col);
    }
    if(ifSafe(A,x+1,y+1,visited,row,col))
    {
        dfs(A,x+1,y+1,visited,row,col);
    }
}
   
int findIslands(vector<int> A[], int N, int M) {
    //ROW=N;
   // COL=M;
  bool visited[N][COL];
  memset(visited, false, sizeof(visited)); 
    int count = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(A[i][j] == 1 && !visited[i][j])
            {
                dfs(A,i,j,visited,N,M);
                count++;
                //cout<<i<<"+"<<j<<"="<<count<<endl;
            }

        }
    }
    return count;
}
