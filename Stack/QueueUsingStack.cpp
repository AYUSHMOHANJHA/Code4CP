//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1#
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends


/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */

/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
        if(s1.size()==0)s1.push(x);
        else{
            while(s1.empty()==false){
                int s= s1.top();
                s2.push(s);
                s1.pop();
            }
            s1.push(x);
            while(s2.empty()==false){
                int s= s2.top();
                s1.push(s);
                s2.pop();
            }
        }
            // while(s1.empty()==false){
            //     int s= s1.top();
            //     cout<<s<<" ";
            //     s1.pop();
            // }
            // cout<<endl;
 }

/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
        if(s1.empty()==false)
        {
           int s = s1.top();
           s1.pop();
            return s;
        }
        return -1;
}
