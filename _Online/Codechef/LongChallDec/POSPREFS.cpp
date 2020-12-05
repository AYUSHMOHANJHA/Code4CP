#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int K,N,pos=0,neg=0,NegFlag=0;
        cin>>N>>K;
        pos=K;
        neg=N-K;
        for(int i=1;i<=N;i++)
        {
            if(N==K)
                cout<<i<<" ";
            else
            {
                if(i==1){cout<<-i<<" ";
                    neg--;
                }
                else if(pos>0 && NegFlag==0  ){cout<<i<<" ";
                pos--;
                NegFlag=1;
                }
                else if(neg>0) {cout<<-i<<" ";
                NegFlag=0;
                neg--;
                }
                else{
                    cout<<i<<" ";
                    pos--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}