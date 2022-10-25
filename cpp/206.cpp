class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* next = head->next;
        ListNode* newhead = head;
        ListNode* pre = NULL;

        while(next){
            pre = newhead;
            newhead = next;
            next = newhead->next;
            newhead->next = pre;
        }
        head->next = NULL;
        return newhead;
    }
};
