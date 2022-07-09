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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = head, *prev = NULL;
        while(n > 0){
            curr = curr->next;
            n--;
        }
        prev = head;
        if(curr == NULL)
            return prev->next;
        
        while(curr->next != NULL){
            curr = curr->next;
            prev = prev->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};