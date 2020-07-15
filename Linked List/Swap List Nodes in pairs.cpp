ListNode* Solution::swapPairs(ListNode* A) {
    if (!A)
        return NULL;
    ListNode* head = A;
    ListNode* curr, *next, *prev;
    prev = NULL;
    curr = A;
    next = curr->next;
    if(next)
        A = next;
    while (next)
    {
        curr->next = next->next;
        next->next = curr;
        if(prev)            
            prev->next = next;      //I had missed this part of linking 1 to 4: 2->1 ~ 4->3
        prev = curr;
        curr = curr->next;
        if(curr)
            next = curr->next;
        else
            next = NULL;
    }
    return A;
}
