vector<int> preorder(Node *root)
{
    // Your code here
    vector<int> vec;

    if (root != NULL)
    {
        vector<int> temp;

        vec.push_back(root->data);

        temp = preorder(root->left);
        vec.insert(vec.end(), temp.begin(), temp.end());

        temp = preorder(root->right);
        vec.insert(vec.end(), temp.begin(), temp.end());
    }
    return vec;
}
