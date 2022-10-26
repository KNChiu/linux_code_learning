class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* one = head;
        ListNode* two = head;

        while(1){
            if (two -> next == NULL)
                return one;
            if (two -> next->next == NULL)
                return one->next;

            one = one->next;
            two = two->next->next;
        }
    }
};
