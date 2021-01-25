//basic approach 

#include<bits/stdc++.h>
using namespace std;
#define N 1000006
bool NonPrime[N];
int main()
{
    int n;
    cin>>n;
  
NonPrime[0]=NonPrime[1]=true;

for (int i=2; i<=3; i++) 
for (int j=i*i; j<N; j+=i) 
NonPrime[j]=true;

for (int i=5, k=4; i*i<N; i+=(k^=6)) 
if (!NonPrime[i]) 
for (int j=i*i; j<N; j+=i) 
NonPrime[j]=true;


for(int i=0;i<100;i++){
        if(NonPrime[i]==false)
            cout<<i<<" ";
}
    return 0;
}


