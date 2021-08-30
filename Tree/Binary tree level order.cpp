vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int> v;
  if(node==NULL)  return v;


  queue <Node*> q;
  struct Node * temp=node;
  q.push(temp);

  while(!q.empty())
  {
      temp=q.front();
      q.pop();
      v.push_back(temp->data);


      if(temp->left)
      q.push(temp->left);
      if(temp->right)
      q.push(temp->right);


  }

  return v;


}
