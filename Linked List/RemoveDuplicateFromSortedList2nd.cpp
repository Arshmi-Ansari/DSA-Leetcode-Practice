// Leetcode : 82  -->  RemoveDuplicateFromSortedList2nd
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* prev = new ListNode(-1);
        prev -> next = head;
        head = prev;
        ListNode* temp = head -> next;
        while(temp != NULL && temp -> next != NULL) {
            if(temp -> val == temp -> next -> val){
                while(temp -> next != NULL && temp -> val == temp -> next -> val){
                    temp = temp -> next;
                }
                prev -> next = temp -> next;
                temp = prev -> next;
            }
            else{
                prev = temp;
                temp = temp -> next;
            }
        } 
        return head -> next;
    }
};
