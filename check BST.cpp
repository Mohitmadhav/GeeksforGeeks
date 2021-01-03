void inorder(struct Node* root,vector <int> &v)
{
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);

}

bool isBST(Node* root) {
    // Your code here

    vector <int> v;
    inorder(root,v);

    int n=v.size();

    for(int i=0;i<n-1;i++)
    {
        if(v[i]>=v[i+1])
        return false;
    }

    return true;


}
