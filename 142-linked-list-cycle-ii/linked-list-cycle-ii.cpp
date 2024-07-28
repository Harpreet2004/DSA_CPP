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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

                slow = slow->next;
                fast = fast->next->next;

            if(slow == fast) {
                slow = temp;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
            return slow;
            }

        }
        return NULL;
    }
};