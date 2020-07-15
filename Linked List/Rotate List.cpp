int length(ListNode* head)
{
    int len = 0;
    while(head)
    {
        head = head->next;
        ++len;
    }
    return len;
}
ListNode* Solution::rotateRight(ListNode* A, int B) {
    if (!A || !A->next)
        return A;
        
    auto l = length(A);
    int last = 0;
    
    if(B%l==0)
        return A;
    else if(l>B)
        last = l-B;
    else
        last = l - B%l;
    
    ListNode* headptr = A;
    while(last-1)
    {
        A = A->next;
        --last;
    }
    
    ListNode* tempNext, *newHead;
    tempNext = newHead = A->next;
    A->next = NULL;
    
    while(tempNext->next)
        tempNext = tempNext->next;
    
    tempNext->next = headptr;
    A = newHead;
    return A;
}
