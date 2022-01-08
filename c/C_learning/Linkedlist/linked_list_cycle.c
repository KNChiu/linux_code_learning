#include <stdio.h>
#include <stdlib.h>


typedef struct ListNode {
    int val;
    struct ListNode *next;
};


bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false;
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (fast == slow) return true;
    }
    return false;
}

