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
// * Time Complexity : O(n/2)  --> O(n)
// * Space Complexity : O(1)
class Solution {
    private :
    ListNode* getMiddle(ListNode* head) {
        // 0 or 1 node
        if (head == NULL || head -> next == NULL) {
            return head;
        }
        // 2 nodes
        if(head -> next -> next == NULL) {
            return head -> next;
        }
        // > 2 nodes
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast != NULL) {
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }
            slow = slow -> next;
        }
        return slow;
    }
public:
    ListNode* middleNode(ListNode* head) {
        return getMiddle(head);
    }
};
