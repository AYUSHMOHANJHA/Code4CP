#include<bits/stdc++.h>
using namespace std;
void showStack(stack<int>s)
{
    while(!s.empty())
    {
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<'\n';
}

int main()
{
    stack<int>s;
    s.push(10);
    s.push(4);
    s.push(20);
    s.push(1);
    showStack(s);
    s.pop();
    showStack(s);
    return 0;
}