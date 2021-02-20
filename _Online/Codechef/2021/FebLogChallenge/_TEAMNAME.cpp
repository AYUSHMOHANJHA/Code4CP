
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007



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
    for(int i=0;i<N;i++)unique_words.insert(s[i]);
    set<string> :: iterator sw;

    vector<pair<string,string>>w;
    for(int i=0;i<N;i++){
        string word1 = s[i];
        char c1= word1[0];
        for(int j=i+1;j<N;j++){
            string word2 = s[j];
            

            word1[0]=word2[0];
            word2[0]=c1;
            //cout<<word1<<" "<<word2<<endl;
            w.push_back(make_pair(word1,word2));

            c1= word2[0];
            word2[0]=word1[0];
            word1[0]=c1;

        }
  
        }


    int count =0;
    for(int i=0;i<w.size();i++){
        if(unique_words.count(w[i].first)==0 && unique_words.count(w[i].second)==0)count++;
    }
    cout<<count*2<<endl;
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