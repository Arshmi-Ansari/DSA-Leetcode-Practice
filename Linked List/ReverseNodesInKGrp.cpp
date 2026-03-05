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
// Leetcode : 25  -->  Reverse Nodes in K Groups
// Time Complexity : O(n)
// Space Complexity : O(n/k)  --> O(n)  -->   due to recursion call stack
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }

        // step 0: check if k nodes exist or not
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL && count < k){
            temp = temp -> next;
            count++;
        }
        if(count < k) return head;

        // step 1: reverse first k nodes
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* curr = head;
        int cnt = 0;
        while(curr != NULL && cnt < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }

        // step 2: recursive call on remaining part
        if(next != NULL){
            head -> next = reverseKGroup(next, k);
        }
        
        // step 3: return head of Linked List
        return prev;
    }
};
