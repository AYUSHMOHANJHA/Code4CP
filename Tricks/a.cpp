//codeforces 
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int N=0;
    cin>>N;
    while(N--)
    {
        long long int n;
        cin>>n;
        long long int count=0;
        if(n>1)
        {
        while(n!=0){
            //cout<<n<<endl;
            if(n==1){count++;
            break;
            }
            if(n==2){
                n=n-1;
                
            }
            if(n%2==0){
            int p = (n/2);
          
            n=n/p;
            }
            else
            {
                n=n-1;
              
            }      
              count++;   
        }
        }
        cout<<count<<endl;
        }
    return 0;
}