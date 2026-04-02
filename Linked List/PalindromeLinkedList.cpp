// Leetcode : 234  -->  PalindromeLinkedList
// Time Complexity : O(n)
// Space Complexity : O(1)

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
    bool isPalindrome(ListNode* head) {
        // if list is empty or only one node present
        if(head == NULL || head -> next == NULL) return true;

        // find mid
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // reverse the second half
        ListNode* prev = NULL;
        ListNode* curr = slow -> next;;
        ListNode* forward = curr -> next;

        while(curr != NULL) {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }

        // compare both halves
        ListNode* head1 = head;
        ListNode* head2 = prev;

        while(head2 != NULL) {
            if(head1 -> val != head2 -> val) return false;
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        return true;
    }
};
