//https://codeforces.com/contest/1454/problem/C
//unsolved :(
    
#include<bits/stdc++.h>
using namespace std;

#define    ll            long long
const int mod = 1e9+7;


int main(){
    
	ios_base::sync_with_stdio(false);
    vector<long long int>v;
	cin.tie(NULL);  long long int t = 1;
    cin>>t;
	while(t--) {
    long long int n;
    cin>>n;

 while (n % 2 == 0)  
    {  
        v.push_back(2);
          n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
                   v.push_back(i);  
            n = n/i;  
        }  
    }  
    if (n > 2)  
     v.push_back(n);

    for(long long int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    int flag=0;
    vector<int>t;
    int c=0,j=0;
    for(int i=1;i<v.size();i++)
        {   
            if((v[i]/v[j])==0){
                cout<<v[j]<<" "<<v[i];
            }
            else c= v[i]*v[j];
            j++;
        }
    cout<<c;
    cout<<endl; 
    }
}