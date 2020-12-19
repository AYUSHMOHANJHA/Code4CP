
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M;
    cin>>N>>M;
    long long int A[N]={0},B[M]={0};
    for(long long int i=0;i<N;i++)
        cin>>A[i];
    for(long long int i=0;i<M;i++)
        cin>>B[i];
    sort(B,B+M);
    sort(A,A+N);
    long long int ans=0;
    for(long long int i=0;i<M;i++)
    {    if(A[0]==B[i]){ans+=0;
        A[0]=B[i];
        }
         else if(A[0]>B[i])ans+=N;
         else ans+=0;
    }
    cout<<ans<<endl;
    return 0;
}