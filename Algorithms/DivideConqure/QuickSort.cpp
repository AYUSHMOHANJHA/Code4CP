#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high);

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now at right place */
        int pi = partition(arr, low, high);
        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}



int partition (int arr[], int low, int high)
{
    int pivot= arr[high];
   int i=low-1;
   int j;
   for(j=low;j<=high-1;j++){
       if(arr[j]<pivot){
           i++;
           swap(arr[i],arr[j]);
       }
   }
   swap(arr[i+1],arr[high]);
   return i+1;
}
