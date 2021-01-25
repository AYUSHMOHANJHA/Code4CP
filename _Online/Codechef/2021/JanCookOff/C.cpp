
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define N 1000006
bool NonPrime[N];
int arr[N];
void sol(){
    ll n;
    cin>>n;
    cout<<arr[n]<<endl;
   
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
   
   NonPrime[0]=NonPrime[1]=true;

for (int i=2; i<=3; i++) 
for (int j=i*i; j<N; j+=i) 
NonPrime[j]=true;

for (int i=5, k=4; i*i<N; i+=(k^=6)) 
if (!NonPrime[i]) 
for (int j=i*i; j<N; j+=i) 
NonPrime[j]=true;



for (int i=0; i<N; i+=i) {
    if(i<=4)arr[i]=0;
    else if(i>=5 && i<=6)arr[i]=1;
    else{
        int count =0,j=3;
        while(i>=j){
            //cout<<i<<endl;
            if(NonPrime[j]==false && NonPrime[(2+j)]==false)count++;
        j++;
        }
        arr[i]=count;
        //cout<<count<<endl;
    }

}

    ll T;
    cin>>T;
    while(T--){
        sol();
    }
    return 0;
}