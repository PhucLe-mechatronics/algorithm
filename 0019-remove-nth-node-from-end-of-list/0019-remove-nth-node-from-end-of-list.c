struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count=1;
    struct ListNode*current=head;
    while(current->next!=NULL)
    {
        current=current->next;
        count++;
    }
    if(count==1)
    {
        return NULL;
    }
    else if(count==n)
    {
        head=head->next;
        return head;
    }
    else
    {
    int count2=1;
    struct ListNode*current2=head;
    while((count2)!=(count-n))
    {
        current2=current2->next;
        count2++;
    }
    current2->next=current2->next->next;
    return head;
    }
}