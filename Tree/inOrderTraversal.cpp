
vector<int>v;
void inOrder1(Node* root){
    if(root==NULL)return;
    inOrder1(root->left);
    v.push_back(root->data);
    inOrder1(root->right);

}
vector <int> inOrder(Node* root)
{
  v.clear();
  inOrder1(root);
  return v;
}