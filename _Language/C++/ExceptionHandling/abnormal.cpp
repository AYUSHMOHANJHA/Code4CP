/*
If an exception is thrown and not caught anywhere, 
the program terminates abnormally. For example, 
in the following program, a char is thrown, 
but there is no catch block to catch a char.  
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    try {
        throw 'a';
    }
    catch (int x){
        cout<<"Caught ";
    }
    return 0;
}

/*
Output:

terminate called after throwing an instance of 'char'
Aborted (core dumped)

*/