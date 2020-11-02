vector<int>v;
void preorder1(Node* root)
{
    if(root==NULL)
        return;
    v.push_back(root->data);
    preorder1(root->left);
    preorder1(root->right);
}

vector<int> preorder(Node* root)
{
v.clear();
preorder1(root);
    return v;
}