//Time complexity : O(N*log(N))
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}
bool comparator(struct val p1,struct val p2)
{
    return (p1.second < p2.second);
}
int maxChainLen(struct val p[],int n)
{
    sort(p,p+n,comparator);
    int count=1;
    int s = p[0].second;
    for(int i=1;i<n;i++)
    {
        //cout<<p[i].first<<" "<<p[i].second<<endl;
       if(s<p[i].first){count++;
           s=p[i].second;
       }
    }
    return count;

}