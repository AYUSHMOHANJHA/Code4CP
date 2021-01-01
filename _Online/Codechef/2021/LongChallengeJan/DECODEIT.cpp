
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

void sol(){
int N;
cin>>N;
string S;
cin>>S;
vector<pair<string,string>>v={{"0000","a"},{"0001","b"},{"0010","c"},{"0011","d"},{"0100","e"},{"0101","f"},{"0110","g"},{"0111","h"},{"1000","i"},{"1001","j"},{"1010","k"},{"1011","l"},{"1100","m"},{"1101","n"},{"1110","o"},{"1111","p"}};
string word="";
int i=0;
while(N>i)
{
    for(int j=0;j<16;j++){  //cout<<j<<"--"<<S.substr(i,4)<<endl;     
    if(v[j].first == S.substr(i,4)) {word.append(v[j].second);break;}}
   // cout<<i<<"-"<<N<<endl;
    i=i+4;
  //  N=N/4;
}
cout<<word<<endl;
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