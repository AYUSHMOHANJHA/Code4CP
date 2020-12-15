#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
const int mod = 1e9+7;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
    cin>>t;
	while(t--) {
        int N;
        cin>>N;

        long long int arr[N+1]={0};
        long long int arr1[N+1]={0};
        for(int i=1;i<N+1;i++)
        {
            cin>>arr[i];
        }
        int backward=N,forward=1,flag=0,j=0;
        for(int i=1;i<N+1;i++)
        {
            if(flag==0){j=forward;
            flag=1;
            forward++;
            }
            else{
                flag=0;
                j=backward;
                backward--;
            }

            arr1[i] = arr[j];
        }
        for(int i=1;i<N+1;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
}