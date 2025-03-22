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
        ListNode* swapPairs(ListNode* head) {
            ListNode* dummy = new ListNode(INT_MAX);
            dummy->next = head;
            ListNode* prev = dummy;
            ListNode* curr = head;
    
            while(curr && curr->next) {
                ListNode* first = curr;
                ListNode* second = curr->next;
                prev->next = second;
                first->next = second->next;
                second->next = first;
                prev = curr;
                curr = curr->next;
            }
            return dummy->next;
        }
    };