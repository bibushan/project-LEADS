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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = NULL, *temp = NULL, *prev = NULL, *i = l1, *j = l2;
        int carry = 0;
        while(i || j){
            carry += (i ? i->val : 0) + (j ? j->val : 0);
            temp = new struct ListNode(carry%10);
            if(result == NULL)
                result = temp;
            else
                prev->next = temp;
            prev = temp;
            carry /= 10;
            
            if(i != NULL)
                i = i->next;
            if(j != NULL)
                j = j->next;
        }
        if(carry > 0)
            temp->next = new struct ListNode(carry);
        
        return result;
    }
};