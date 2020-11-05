/*
There is a special catch block called ‘catch all’ catch(…) 
that can be used to catch all types of exceptions. 
For example, in the following program, an int is thrown as an exception, 
but there is no catch block for int, so catch(…) block will be executed.

Implicit type conversion doesn’t happen for primitive types. 
For example, in the following program ‘a’ is not implicitly converted to int 
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    try {
        throw 10;
    }
    catch (char s){
        cout<<"Caught "<<s;
    }
    catch(...){
        cout<<"Default Exception\n";   //this will print because there is no int catch block
    }
    return 0;
}