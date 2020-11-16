#include<bits/stdc++.h>

using namespace std;

void activity_selection(vector<int> start_time,vector<int> finish_time,int number_activity)
{
    int i=0,j=1;;
    cout<<i<<" ";

    for( j=1;j<number_activity;j++)
    {
       // cout<<start_time[j]<<"-"<<finish_time[i]<<endl;
        if(start_time[j]>=finish_time[i])
         {   cout<<j<<" ";
            i=j;
         }
    }
}

int main()
{

    int number_activity=0;
    cin>>number_activity;
    vector<int> start_time;
     vector<int> finish_time;

    for(int i=0;i<number_activity;i++)
    {
        int s,f;
        cin>>s>>f;
        start_time.push_back(s);
        finish_time.push_back(f);
    }
    // for(int i=0;i<number_activity;i++)
    // {
    //     cout<<start_time[i]<<" "<<finish_time[i]<<endl;
    // }
    activity_selection(start_time,finish_time,number_activity);

    return 0;
}