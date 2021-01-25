
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){

ll L,R;
cin>>L>>R;
 ll N=(R-L)+1;
// set<int>S;
// for(ll i =L;i<=R;i++){
//     for(ll j=L;j<=R;j++){
//         S.insert(i+j);
//     }
// }
// cout<<S.size()<<endl;
//-------------------------

cout<<(N*2)-1<<endl;

// cout<<((N)*(N+1))/2<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
    ll T;
    cin>>T;
    while(T--){
        sol();
    }
    return 0;
}