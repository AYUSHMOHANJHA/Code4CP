#include<bits/stdc++.h>
using namespace std;

int main()
{
    int D1=0,D2=0,V1=0,V2=0;
    int P=0;
    int limit=0;
    int day=0;
    cin>>D1>>V1>>D2>>V2>>P;
    if(D1<D2)day=D1;
    else if(D1>D2 ) day=D2;
    else day=D1;
    while(1)
    {
        if(limit>=P){break;}

        if(D1<D2 && day<D2)limit+=V1;
        else if(D1>D2 && day<D1)limit+=V2;
        else limit=limit+V1+V2;
        day++;
    }
    cout<<day-1<<endl;
    return 0;
}