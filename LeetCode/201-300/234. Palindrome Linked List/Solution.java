/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        if (head == null) {
            return head;
        }
        ListNode current = head;
        ListNode prev = null;
        ListNode next = current.next;

        while (current != null) {
            current.next = prev;
            prev = current;
            current = next;
            if (next != null) {
                next = next.next;
            }
        }

        return prev;
    }

    public boolean isPalindrome(ListNode head) {
        ListNode slow = head, fast = head, half;
        while (fast != null && fast.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode headSecond = reverseList(slow);
        ListNode reverseHead = headSecond;

        while (head != null && headSecond != null) {
            if (head.val != headSecond.val) {
                return false;
            }
            head = head.next;
            headSecond = headSecond.next;
        }

        return true;
    }
}