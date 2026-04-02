// Leetcode : 2095  -->  Delete the Middle Node of a Linked List
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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == NULL){
            head = NULL;
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = new ListNode(-1);
        prev -> next = head;

        while(fast -> next != NULL){
            prev = slow;
            slow = slow -> next;
            fast = fast -> next;
            if(fast -> next != NULL){
                fast = fast -> next;
            }
        }
        prev -> next = slow -> next;
        delete slow;
        return head;
    }
};
