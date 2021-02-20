
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

int min(int a, int b);

int binomialCoeff(int n, int k)
{
    int C[n + 1][k + 1];
    int i, j;
 
    // Caculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
 
    return C[n][k];
}
 
// A utility function to return
// minimum of two integers
int min(int a, int b) { return (a < b) ? a : b; }
 

void sol(){
    ll N;
    cin>>N;
    vector<string>s;
    
    for(int i=0;i<N;i++){
        string t;
        cin>>t;
        s.push_back(t);
    }

    set<string>unique_words;
    set<string>suffix_words;
    set<string>pre_char;
    for(int i=0;i<N;i++)unique_words.insert(s[i]);
    for(int i=0;i<N;i++){
        string temp = s[i].substr(1,s[i].length());
        suffix_words.insert(temp);
    }
    for(int i=0;i<N;i++){
        string temp = s[i].substr(0,1);
        pre_char.insert(temp);
    }
    set<string> :: iterator sw;
    set<string> :: iterator sc;
    int count=0;
    for(auto sw:suffix_words){
        string stw = sw;
            for(auto sc:pre_char){
                string stc = sc;
                stc=stc+stw;
                if(unique_words.count(stc)==0)count++;
            }
    }
if(count <=1)cout<<0<<endl;
else cout<<count<<endl;
    //else cout<<binomialCoeff(count,2)<<endl;
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