ListNode* Solution::detectCycle(ListNode* A) {
    if(!A || !A->next)
        return NULL;
    ListNode* slow, *fast;     
    slow = fast = A;
    while (fast)    //if you give condn slow!=fast; it's wrong since slow=fast=A initially.
    {
        if (!fast->next || !fast->next->next)
            return NULL;
        slow = slow->next;
        fast = fast->next->next; 
        if(slow==fast)
            break;
    }
    slow = A;
    while(slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

