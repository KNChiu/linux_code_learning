#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *first = head;
    struct ListNode *secound;

    if (first -> next != NULL) {
        for (int i = 0; i < n; i++) {
            first = first -> next;
        }
    } else {
        return NULL;
    }

    if (!first) return head->next;

    secound = head;

    while (first -> next != NULL) {
        first = first -> next;
        secound = secound -> next;
    }

    secound -> next = secound -> next -> next;

    return head;
}
