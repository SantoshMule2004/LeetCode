/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
    public:
        bool hasCycle(ListNode* head) {
            ListNode* T = head;
            ListNode* H = head;
    
            while (H && H->next) {
                if (T->next == H->next->next)
                    return true;
                else {
                    T = T->next;
                    H = H->next->next;
                }
            }
            return false;
        }
    };