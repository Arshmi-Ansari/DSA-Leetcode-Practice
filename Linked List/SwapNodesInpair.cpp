// Leetcode : 24  -->  Swap Nodes In pair
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(-1);
        dummy -> next = head;
        ListNode* prev = dummy;
        ListNode* temp = head;
        while(temp != NULL && temp -> next != NULL){
            ListNode* nextNode = temp -> next;
            ListNode* forward = nextNode -> next;

            prev -> next = nextNode;
            nextNode -> next = temp;
            temp -> next = forward;
            prev = temp;
            temp = forward;
        }
        return dummy -> next;
    }
};
