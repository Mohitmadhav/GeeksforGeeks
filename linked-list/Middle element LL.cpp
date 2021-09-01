int getMiddle(Node *head)
{
   // Your code here
   struct Node*temp=head;
   int n=0;

   if(head==NULL) return -1;

   while(temp!=NULL)
   {
      n++;
      temp=temp->next;
   }

   int size=(n%2==0)?((n/2)+1):(n+1)/2;
   int c=0;

   struct Node*t=head;

   while(t!=NULL)
   {
      if(c==size-1)
      return t->data;

      c++;
      t=t->next;
   }

}
