// Leetcode : 237  -->  Delete Node In a Linked List
// Time Complexity : O(1)
// Space Complexity : O(1)

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
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;
        ListNode* forward = node -> next;
        node -> next = forward -> next;
        delete forward;
    }
};
