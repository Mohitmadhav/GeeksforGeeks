int intersectPoint(Node* head1, Node* head2)
{
    struct Node* temp=head1;
    while(temp!=NULL)
    {
        if(temp->data==0)
        temp->data=1000000;
        temp->data= -1*temp->data;
        temp=temp->next;
    }

    temp=head2;
    int res=-1;

    while(temp!=NULL)
    {
        if(temp->data < 0){
        res=-1*temp->data;
        break;
        }

        temp=temp->next;
    }

    if(res==1000000) return 0;
    else return res;
}

