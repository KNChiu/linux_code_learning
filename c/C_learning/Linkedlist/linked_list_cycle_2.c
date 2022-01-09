#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *faster = head, *lower = head, *p = head;

    while (faster != NULL && faster -> next != NULL) {
        lower = lower -> next;
        faster = faster -> next -> next;

        if (lower == faster) {
            while (p != lower) {
                p = p -> next;
                lower = lower -> next;
            }
            return p;
        }
    }
    return NULL;
}


