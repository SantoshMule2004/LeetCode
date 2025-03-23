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
        ListNode* removeNodes(ListNode* head) {
            stack<ListNode*> stk;
            ListNode* dummy = new ListNode(INT_MAX);
            dummy->next = head;
            ListNode* curr = dummy;
    
            while(curr) {
                bool flag(false);
                while(!stk.empty() && stk.top()->val < curr->val) {
                    stk.pop();
                    flag = true;
                }
    
                if(flag && !stk.empty())
                    stk.top()->next = curr;
    
                stk.push(curr);
                curr = curr->next;
            }
            stk.top()->next = NULL;
            return dummy->next;
        }
    };