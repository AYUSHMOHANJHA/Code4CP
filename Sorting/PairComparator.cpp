#include<bits/stdc++.h>
using namespace std;

struct val{
    int first;
    int second;
};
bool comparator(struct val p1,struct val p2)
{
    return (p1.second < p2.second);
}
void function1(struct val p[], int n)
{
    sort(p,p+n,comparator);
    for(int i=0;i<n;i++)
    {
        cout<<"{"<<p[i].first<<","<<p[i].second<<"}";
    }
}
int main ()
{
    struct val p[] = { { 5, 24 }, { 39, 60 }, { 15, 28 }, { 27, 40 }, { 50, 90 } };
    int n = sizeof(p)/sizeof(p[0]);
    function1(p,n);

    return 0;
}