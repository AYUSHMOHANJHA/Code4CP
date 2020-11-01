#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* InsertNode(Node* root, int data)
{
    if(root == NULL){
        root = newNode(data);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp->left != NULL)
            q.push(temp->left);
        else
        {
            temp->left = newNode(data);
            return root;
        }

        if(temp->right != NULL)
            q.push(temp->right);
        else
        {
            temp->right = newNode(data);
            return root;
        }
    }
}

void inorder(Node* temp)
{
    if(temp == NULL)
        return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}
int main()
{
    Node* root = newNode(10);
    root->left = newNode(11);
    root->left->left = newNode(7);
    root->right = newNode(9);
    root->right->left = newNode(15);
    root->right->right = newNode(8);

    inorder(root);
    cout<<endl;

    int key = 12;
    root = InsertNode(root,key);
    inorder(root);
    return 0;
}