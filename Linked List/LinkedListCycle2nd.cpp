// Leetcode : 142  -->  Linked List Cycle 2nd
// Time Complexity : O(n)
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
private:
    ListNode* floydDetectLoop(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL) {

            fast = fast -> next;
            if(fast != NULL) {
                fast = fast -> next;
            }

            slow = slow -> next;

            if (slow == fast) {
                return slow;
            }
        }
        return NULL;
    }
    ListNode* getStartingNode(ListNode* head) {
        if(head == NULL) {
            return NULL;
        }
        ListNode* intersection = floydDetectLoop(head);
        if(intersection == NULL) return NULL;
        ListNode* slow = head;
        while(slow != intersection) {
            slow = slow -> next;
            intersection = intersection -> next;
        }
        return slow;
    }
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* ans = getStartingNode(head);
        if(ans == NULL) return NULL;
        else return ans;
    }
};
