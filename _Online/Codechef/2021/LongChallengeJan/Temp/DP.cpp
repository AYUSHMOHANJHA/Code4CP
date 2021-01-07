#include <bits/stdc++.h>
 using namespace std;
// Returns true if there is a subset of set[]
// with sun equal to given sum
vector<int>V;
bool isSubsetSum(int set[], int n, int sum)
{
    // The value of subset[i][j] will be true if
    // there is a subset of set[0..j-1] with sum
    // equal to i
    bool subset[n + 1][sum + 1];
 
    // If sum is 0, then answer is true
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
 
    // Fill the subset table in botton up manner
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1]){
                subset[i][j] = subset[i - 1][j]
                               || subset[i - 1][j - set[i - 1]];
            }
        }
    }
 
       // uncomment this code to print table
    cout<<"X |";
    for (int i = 0; i <= sum; i++)
        printf ("%3d|", i);
    printf("\n");
    for (int i = 0; i <= n; i++)
     {cout<<i<<" |";
       for (int j = 0; j <= sum; j++)
          printf ("%3d|", subset[i][j]);
       printf("\n");
     }
 
    return subset[n][sum];
}

int main()
{
    int set[] = {7,8,19,7,8,7,10,20};
    int sum = 13;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum+1) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}