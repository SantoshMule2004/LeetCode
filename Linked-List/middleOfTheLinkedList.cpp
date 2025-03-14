ListNode* middleNode(ListNode* head) {
    ListNode *H = head;
    ListNode *T = head;

    while(H && H->next) {
        T = T->next;
        H = H->next->next;
    }
    return T;
}