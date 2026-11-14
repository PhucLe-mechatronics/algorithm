struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode Listl1;
    struct ListNode*List1=&Listl1;
    struct ListNode Listl2;
    struct ListNode*List2=&Listl2;
    struct ListNode*Tail1=List1;
    struct ListNode*Tail2=List2;
    struct ListNode*Current=head; 
    while (Current!=NULL)
    {
        if(Current->val<x)
        {
            Tail1->next=Current;
            Tail1=Tail1->next;
            Current=Current->next;
        }
        else
        {
            Tail2->next=Current;
            Tail2=Tail2->next;
            Current=Current->next;
        }
    }
    Tail2->next=NULL;
    Tail1->next=List2->next;
    return List1->next;
}