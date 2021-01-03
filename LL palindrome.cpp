bool isPalindrome(Node *head)
{
    //Your code here
    deque <int> dq;

    struct Node* temp = head;

    while(temp)
    {
        dq.push_back(temp->data);
        temp=temp->next;
    }

    while(!dq.empty())
    {
    if(dq.front()==dq.back())
    {
        dq.pop_front();
        if(!dq.empty())
        dq.pop_back();
    }

    else
    return false;

    }

    return true;
}

