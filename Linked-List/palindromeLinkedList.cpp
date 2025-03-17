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
        ListNode* middleOFLinkedList(ListNode* head) {
            ListNode* H = head;
            ListNode* T = head;
    
            while (H && H->next) {
                T = T->next;
                H = H->next->next;
            }
            return T;
        }
    
        ListNode* reverseLinkedList(ListNode* head) {
            ListNode* curr = head;
            ListNode* prev = NULL;
            ListNode* tmp = NULL;
    
            while (curr) {
                tmp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tmp;
            }
            return prev;
        }
    
        bool isPalindrome(ListNode* head) {
            ListNode* curr = head;
            ListNode* middle = middleOFLinkedList(curr);
            ListNode* nHead = reverseLinkedList(middle);
    
            curr = head;
            ListNode* nCurr = nHead;
    
            while(nCurr) {
                if(curr->val != nCurr->val) 
                    return false;
    
                curr = curr->next;
                nCurr = nCurr->next;
            }
            return true;
        }
    };