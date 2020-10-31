#include<bits/stdc++.h>
using namespace std;

class node
{
    public: 
        int data;
        node *left, *right;
};
void printLevelOrder(node* root)
{
    if(root == NULL) return;
     
    queue<node *>q;
    q.push(root);

    while(q.empty()==false)
    {
        node* node = q.front();
        cout<<node->data<<" ";
        q.pop();

        if(node->left !=NULL)
            q.push(node->left);
        if(node->right !=NULL)
            q.push(node->right);
    }
}
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return Node;
}
int main(){

    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printLevelOrder(root);
    return 0;

}