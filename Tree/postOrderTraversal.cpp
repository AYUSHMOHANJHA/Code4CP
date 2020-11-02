
vector<int>v;
void postOrder1(Node* root){
    if(root==NULL)return;
    postOrder1(root->left);
    postOrder1(root->right);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    v.clear();
  postOrder1(root);
  return v;
}