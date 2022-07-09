/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode prev1 = l1;
        ListNode curr1 = l1;
        ListNode curr2 = l2;
        int carry = 0;
        while (curr1 != null) {
            if (curr2 != null) {
                carry += curr2.val;
                curr2 = curr2.next;
            }
            carry += curr1.val;
            curr1.val = carry % 10;
            carry /= 10;
            prev1 = curr1;
            curr1 = curr1.next;
        }
        while (curr2 != null) {
            carry += curr2.val;
            prev1.next = new ListNode();
            prev1 = prev1.next;
            prev1.val = carry % 10;
            carry /= 10;
            curr2 = curr2.next;
        }
        if (carry != 0) {
            prev1.next = new ListNode(carry);
        }
        return l1;
    }
}