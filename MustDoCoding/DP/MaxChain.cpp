
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

int maxChainLen(struct val arr[],int n)
{
    int lis[n]={1},a=0, c=0;
    lis[0]=1;
    for(int i=1;i<n;i++)
    {
        lis[i]=1;   
        for(int j=0;j<i;j++){
        if(arr[j].second<arr[i].first && lis[i]<lis[j]+1){
            lis[i]=lis[j]+1;
        }
        }
    }
    return (int)*max_element(lis,lis+n);
}