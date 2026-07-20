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
        //code here
        if(head==NULL) return NULL;

        ListNode*slow=head;
        ListNode*fast=head;

        // detecting cycle; 
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)//means cycle h;
            {
                slow=head; //find cycle start;

                while(slow!=fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                //jab slow==fast;
                return slow;
            }
        }
        return NULL;
    }
};
