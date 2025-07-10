class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            // slow will move with 1 unit of speed
            slow=slow->next;

            // fast will move with 2 units of speed
            fast=fast->next->next;
        }

        return slow;
    }
};
