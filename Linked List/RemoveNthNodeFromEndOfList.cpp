// leetcode : 19  -->  Remove Nth Node From End Of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head -> next == NULL){
            head = NULL;
            return head;
        }
        ListNode* temp = head;
        int cnt = 0;
        while(temp != NULL) {
            temp = temp -> next;
            cnt++;
        }
        
        int nodeIndex = cnt - n;
        temp = head;
        if(cnt == n) {
            head = head -> next;
            delete temp;
            return head;
        }
        cnt = 1;
        while(cnt != nodeIndex) {
            temp = temp -> next;
            cnt++;
        }
        ListNode* NodeToDelete = temp -> next;
        if(temp -> next -> next == NULL) {
            temp -> next = NULL;
            delete NodeToDelete;
            return head;
        }
        else {
            temp -> next = temp -> next -> next;
            delete NodeToDelete;
            return head;
        }   
    }
};
