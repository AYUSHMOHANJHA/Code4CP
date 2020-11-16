/*
Time Complexity : It takes O(n log n) time if input activities may not be sorted. 
It takes O(n) time when it is given that input activities are always sorted.
*/
#include<bits/stdc++.h>

using namespace std;


void activity_selection(vector<int> start_time,vector<int> finish_time,int number_activity)
{
   pair<int,int>s[number_activity];

    for(int i=0;i<number_activity;i++)
    {
        s[i].first=finish_time[i];
        s[i].second=start_time[i];
    }
    sort(s,s+number_activity);
   // vector<int>::iterator it;
    // for(int i=0;i<number_activity;i++)
    // {
    //     cout<<s[i].second<<" "<<s[i].first<<endl;
    // }
    // cout<<endl;

    for(int i=0;i<number_activity;i++)
    {
        
        start_time.insert(start_time.begin()+i,s[i].second);
        finish_time.insert(finish_time.begin()+i,s[i].first); 
    }

    int i=0,j=1;
    cout<<i<<" ";

    for( j=1;j<number_activity;j++)
    {
        //cout<<start_time[j]<<"-"<<finish_time[i]<<endl;
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