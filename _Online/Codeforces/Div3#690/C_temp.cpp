//wrong
#include<bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  int t = 1;
    cin>>t;
    int arr[51]={0};
	while(t--) {
        int N,t;
        
        for(int k=1;k<=50;k++){
            N=k;
        int ans=0;
      
    int i = 1;
    if(N==0)cout<<0<<endl;
    else{
    while (1) {
        if (getSum(i) == N) {
            ans = (ans *10) + i;
            break;
        }
        i++;
    }


        t=ans;
        int res=1,rem=0;
        rem = t%10;
        t= t/10;
        res=rem;
        int flag=0;
        while(t){
            rem = t%10;
            t= t/10;
            res^=rem;
            if(res==0)flag=1;
        }
        if(flag==0)arr[i]=ans;
        else arr[i]=-1;
    }}
    cout<<"[";
    for(int k=1;k<51;k++)
    {
        cout<<arr[k]<<",";
    }
    cout<<"]";}
}