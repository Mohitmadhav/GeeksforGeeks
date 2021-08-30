/* Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8

     */


void leftView(Node *root)
{
   // Your code here
   if(root==NULL)
   return;

   cout<<root->data<<" ";

   if(root->left)
   leftView(root->left);

   else
   leftView(root->right);
}
