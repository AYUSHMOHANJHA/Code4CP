#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int N,S;
	    cin>>N>>S;
	    long long int arr[N+1]={0};
	    for(int i=1;i<=N;i++)
	        cin>>arr[i];
	   long long int res=0,flag=0;
        // Time Complexity O(n*n)
	    // for(int i=1;i<=N;i++){
	    //     int j;
        //     res=0;
        //     for( j=i;j<=N;j++){
	    //         res+=arr[j];
	        
	    //     if(res==S && flag==0){
	    //         cout<<i<<" "<<j<<endl;
	    //         flag=1;
	    //         break;
	    //     }}
	    // }
	    // if(flag==0)cout<<-1<<endl;
	}
	return 0;
}