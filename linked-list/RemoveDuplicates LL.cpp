Node *removeDuplicates(Node *root)
{

    if(root == NULL)
    return NULL;

    struct Node* save = root;
    while(save->next != NULL){
    if(save->data == save->next->data)
    save->next = save->next->next;
    else
    save = save->next;
}
return root;
}
