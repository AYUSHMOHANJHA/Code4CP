#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int A,B,evenA,oddA,evenB,oddB;
        cin>>A>>B;

        if(A%2==0)
        {
            evenA=(A/2);
            oddA=(A/2);
        }
        else
        {
            evenA=(A/2);
            oddA=(A/2)+1;
        }
        if(B%2==0)
        {
            evenB=(B/2);
            oddB=(B/2);
        }
        else
        {
            evenB=(B/2);
            oddB=(B/2)+1;
        }

        cout<<((evenA*evenB)+(oddA*oddB))<<endl;

    }
    return 0;
}