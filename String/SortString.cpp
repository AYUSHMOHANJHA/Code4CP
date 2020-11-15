/*
Sorting the string 

Time Complexity: O( n ), where n is the length of input string.
Auxiliary Space: O( 1 ).

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s = " ";
    cin>>s;
    //cout<<s;
    int count_char[26] = {0};

    for(int i=0;i<s.size();i++)
        count_char[(s[i]-97)]++;
    // for(int i=0;i<s.size();i++)
    //     cout<<count_char[i]<<" ";

    for(int i=0; i<26; i++)
    {
        //cout<<"h"<<endl;
        for(int j=0;j<count_char[i];j++)
        {
            //cout<<"m"<<j<<endl;
            cout<<(char)(i+'a');
        }
    }
    return 0;
}