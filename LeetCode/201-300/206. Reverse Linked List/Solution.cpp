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

/*
    Time Complexity : O(N)
    Space Complexity: O(1)
*/
class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *nxt = NULL;
    while (curr) {
      nxt = curr->next;
      curr->next = prev;
      prev = curr;
      curr = nxt;
    }
    return prev;
  }
};