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
    ListNode* middleNode(ListNode* head) {
        // if (head==NULL) return false;

        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            // When fast reaches the end → slow is at the middle
// If there are 2 middles → slow automatically lands on the second one

            slow=slow->next; //move 1 step;
            fast=fast->next->next; //move 2 step;
        }
        return slow;
    }
};