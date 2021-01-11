#include <bits/stdc++.h> 
using namespace std; 

void merge(int arr1[], int arr2[], int n, int m) 
{ 

} 

int main() 
{ 
	int T;
	cin >> T;
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    int arr1[n], arr2[m];
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    merge(arr1, arr2, n, m); 
        for (int i = 0; i < n; i++) 
            printf("%d ", arr1[i]); 
	    for (int i = 0; i < m; i++) 
		    printf("%d ", arr2[i]); 
	    cout<<endl;
	}
	return 0; 
} 