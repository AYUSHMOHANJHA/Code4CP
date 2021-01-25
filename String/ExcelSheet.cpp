#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int rem=-1;
    string S = "";
    while(N>0){
        rem=N%26;
        if(rem==0){S+='Z';
            N=(N/26)-1;
        }
        else{ S+=char(64+rem);
            N=N/26;
        }
    }
    std::reverse(S.begin(),S.end());
    std::cout<<S<<endl;
    return 0;
}