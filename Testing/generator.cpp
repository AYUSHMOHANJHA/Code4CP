#include<bits/stdc++.h>
using namespace std;

int rand(int a, int b){
    return a + rand() % (b-a+1);
}
int main(int argc, char* argv[])
{
    srand(atoi(argv[1]));
    set<int>used;
    // int N;
    // cin>>N;
    for(int i=1;i<100;i++)
    {
        int x;
        do{
            x = rand(1,100);
        }while(used.count(x));
        printf("%d ",x);
        used.insert(x);
    }
    return 0;
}