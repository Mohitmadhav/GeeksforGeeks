Node* segregate(Node *head) {

    // Add code here
    struct Node* temp=head;
    vector<int> v;int n=0;

    while(temp)
    {
        n++;
        v.push_back(temp->data);
        temp=temp->next;
    }

    sort(v.begin(),v.end());

    temp=head;

    while(temp)
    {
       for(int i=0;i<n;i++)
       {
           temp->data=v[i];
           temp=temp->next;
       }
    }

    return head;
}
