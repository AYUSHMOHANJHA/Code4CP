#include <bits/stdc++.h>
using namespace std;
bool isSubsetSum(int set[], int n, int sum,int sum1,int arr1[])
{
    // if(sum<sum1){sum1=sum;
    // arr1[n]=0;
    // }
    if (sum == 0)
        return true;
    if (n == 0)
        return false;
    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum,sum1,arr1);

    return isSubsetSum(set, n - 1, sum,sum1,arr1)
           || isSubsetSum(set, n - 1, sum - set[n - 1],sum1,arr1);
}
int main()
{
    //vector<int>V;
    int N;
    int arr[N],arr1[N];
    cin>>N;
    for(int i=0;i<N;i++){cin>>arr[i];
    }
    for(int i=0;i<N;i++){arr1[i]=arr[i];
    }
    int sum,sum1;
    cin>>sum;
    sum1=sum;
    // int n = V.size();
    if (isSubsetSum(arr, N, sum,sum1,arr1) == true)
        printf("1 Found a subset with given sum");
    else
        printf("1 No subset with given sum");
    
    for(int i=0;i<N;i++){cout<<arr1[i]<<" ";
    }
    return 0;
}