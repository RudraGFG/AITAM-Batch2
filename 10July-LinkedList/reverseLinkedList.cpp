class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prv = NULL;
        ListNode* curr = head;
        ListNode* frwd = NULL;

        while(curr != NULL){
            frwd = curr->next; // storing forward list because we will break the link
            curr->next = prv; // making reverse link

            prv=curr;
            curr=frwd;
        }

        return prv;
    }
};
