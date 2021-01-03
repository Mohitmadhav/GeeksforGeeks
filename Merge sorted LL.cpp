Node* sortedMerge(Node* head_A, Node* head_B)
{
    // code here
    struct Node* t1=head_A;
    struct Node* t2=head_B;

   if(head_A==NULL) return head_B;
   if(head_B==NULL) return head_A;
   if(head_A==NULL && head_B==NULL) return NULL;
   struct Node* temp;


   if(t1->data<t2->data)
       {
           temp=new Node(t1->data);

           t1=t1->next;
       }

       else
       {
           temp=new Node(t2->data);

           t2=t2->next;
       }

       struct Node*head=temp;


   while(t1!=NULL && t2!=NULL)
   {
       if(t1->data<t2->data)
       {
           temp->next=new Node(t1->data);
           temp=temp->next;
           t1=t1->next;
       }

       else
       {
           temp->next=new Node(t2->data);
           temp=temp->next;
           t2=t2->next;
       }

   }

   while(t1!=NULL)
   {
        temp->next=new Node(t1->data);
           temp=temp->next;
           t1=t1->next;
   }

   while(t2!=NULL){

       temp->next=new Node(t2->data);
           temp=temp->next;
           t2=t2->next;
   }


   return head;

}
