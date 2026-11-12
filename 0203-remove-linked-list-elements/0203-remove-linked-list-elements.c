struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode*current;
    while((head!=NULL)&&(head->val==val))
    {
        head=head->next;
    }
    current=head;
    if(current==NULL)
    {
        return head;
    }
    else
    {
    while (current->next!=NULL)         
        {
            if(current->next->val==val)
            {
                current->next=current->next->next;
            }
            else
            {
                current=current->next;
            }
        }
    }
    return head;
}