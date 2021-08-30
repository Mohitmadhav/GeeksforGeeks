void print (Node* root,vector <int> &temp){

    if(root==NULL) return;

    temp.push_back(root->data);
    print(root->left,temp);
    print(root->right,temp);
}
vector <int> preorder(Node* root)
{
  // Your code here

  vector<int> temp;
  print(root,temp);

  return temp;

}
