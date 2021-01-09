#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends


void merge(int arr[], int l, int m, int r)
{
     int n1 = m-l+1;   // 5 , if l=0,m=4,r=9
     int n2 = r-m;     // 5
     int a1[n1],a2[n2];
     for(int i=0;i<n1;i++)a1[i]=arr[l+i];
     for(int j=0;j<n2;j++)a2[j]=arr[m+j+1];
     int i=0,j=0,k=l;
     while(i<n1 && j<n2){
            if(a1[i]<=a2[j])arr[k++]=a1[i++];
            else arr[k++]=a2[j++];
        }
    while(i<n1)arr[k++]=a1[i++];
    while(j<n2)arr[k++]=a2[j++];
}