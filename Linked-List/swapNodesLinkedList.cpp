/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* swapNodes(ListNode* head, int k) {
            ListNode* curr = head;
            ListNode* bCurr = head;
    
            for(int i=1; i<k; i++)
                curr = curr->next;
            
            int n = 0;
            while(bCurr) {
                bCurr = bCurr->next;
                n++;
            }
    
            bCurr = head;
            for(int i=0; i<(n-k); i++)
                bCurr = bCurr->next;
    
            swap(curr->val, bCurr->val);
    
            return head;
        }
    };