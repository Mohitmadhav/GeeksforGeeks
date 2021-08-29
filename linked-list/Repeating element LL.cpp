int count(struct node* head, int search_for)
{

    struct node*temp=head;
    int c=0;

    while(temp!=NULL)
    {
       if(temp->data==search_for)
       c++;

       temp=temp->next;
    }

    return c;


}
