int length(ListNode* head)
{
    int len = 0;
    while (head)
    {
        head = head->next;
        ++len;
    }
    return len;
}
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(!A)
        return A;
    if(B==0)
        B = 1;
        
    auto l = length(A);
    int last;
    bool remFirst = false;
    
    if(B<l)
        last = l - B;
    else
        remFirst = true;
        
    if(remFirst)
    {
        A = A->next;
        return A;
    }
    
    ListNode* head = A;
    while(last-1)
    {
        A = A->next;
        --last;
    }
    
    A->next = A->next->next;
    
    return head;
}
