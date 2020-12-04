#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N=0,D=0,t=0,Risk=0,notRisk=0,res=0;
        cin>>N>>D;
        vector<int>arr;
        for(int i=0;i<N;i++){
            cin>>t;
            arr.push_back(t);
        }
        for(int i=0;i<N;i++)
        {
            if(arr[i]>=80 || arr[i]<=9)Risk++;
            else notRisk++;
        }
        if((Risk%D)==0)res=res+(Risk/D);
        else res=res+int(Risk/D)+1;
        if((notRisk%D)==0)res=res+(notRisk/D);
        else res=res+int(notRisk/D)+1;
        //res=res+ceil(Risk/D)+ceil((notRisk/D));
        //cout<<(notRisk/D)<<endl;
        cout<<res<<endl;
    }

    return 0;
}