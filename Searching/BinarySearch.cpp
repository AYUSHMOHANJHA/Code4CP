/*https://practice.geeksforgeeks.org/problems/who-will-win/0*/
#include <iostream>
using namespace std;

int main() {
    int T;
	cin>>T;
	while(T--){
	    int N,k;
	    cin>>N>>k;
	    int a[1000000];
	    for(int i=0;i<N;i++){
	        cin>>a[i];
	    }
        int l,r,m,flag=0;
        l=0;
        r=N-1;
        while(l<=r){
            m = l + (r-l)/2;
            
            if(a[m]<k) l =m+1;
            else r = m-1;
            
            if(a[m]==k)flag=1;
        }
        if(flag==1)
	        cout<<1<<endl;
	    else 
	        cout<<-1<<endl;
	}
	return 0;
}