#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int x = -6;
    cout<<"Before try \n";

    try
    {
        cout<<"Inside try \n";
        if(x<0){
            throw x;
            cout<<"After throw(Never Excecuted) \n";
        }
    }
    catch(int a)
    {
        cout<<"Exception Caught"<<a<<"\n";
    }
    cout<<"After catch (Will be executed)\n";
    return 0;
}