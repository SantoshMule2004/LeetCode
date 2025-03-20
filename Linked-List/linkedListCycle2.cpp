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
        ListNode *detectCycle(ListNode *head) {
            ListNode* T = head;
            ListNode* H = head;
    
            while(H && H->next) {
                T = T->next;
                H = H->next->next;
    
                if(T == H)
                    break;
            }
    
            if(!H || !H->next) return NULL;
    
            T = head;
            while(T != H) {
                T = T->next;
                H = H->next;
            }
            return T;
        }
    };