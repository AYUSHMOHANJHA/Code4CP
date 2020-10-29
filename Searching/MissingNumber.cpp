/*https://practice.geeksforgeeks.org/problems/missing-number-in-array/0#*/

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    long long int a[N];
	    for(long long int i=0;i<N-1;i++){
	        cin>>a[i];
	    }
	    long long int sum1=0,sum2=0;
	    for(long long int i=1;i<=N;i++){
	        sum1 = sum1+i;
	    }
	    for(long long int i=0;i<N-1;i++){
	       // cout<<sum2<<"-"<<a[i]<<endl;
	        sum2=sum2+a[i];
	    }
	   // cout<<sum1<<endl;
	   // cout<<sum2<<endl;
	    cout<<sum1-sum2<<endl;
	}
	return 0;
}