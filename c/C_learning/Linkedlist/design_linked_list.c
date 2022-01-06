#include <stdio.h>
#include <cstdlib>

typedef int Elemtype;

typedef struct Node{
    Elemtype data;
    struct Node *next;
}MyLinkedList;

MyLinkedList* myLinkedListCreate() {                                // 定義了一個帶頭節點(head)的單鏈表,並返回頭指針
    MyLinkedList *obj=(MyLinkedList *)malloc(sizeof(MyLinkedList));
    obj -> next = NULL;
    return obj;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList *p = obj -> next;
    int j = 0;
    while(p != NULL && j < index) {                                 // 從頭開始尋找
        j++;
        p = p -> next;
    }
    if (p == NULL || index < 0) {
        return -1;
    } else {
        return p -> data;
    }
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList *p = obj;
    MyLinkedList *s = (MyLinkedList *)malloc(sizeof(MyLinkedList));
    
    s -> data = val;
    s -> next = p -> next;
    p -> next = s;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList *p = obj;
    MyLinkedList *s = (MyLinkedList *)malloc(sizeof(MyLinkedList));

    s -> data = val;
    s -> next = NULL;       //尾節點指向空

    while(p -> next != NULL) {   //尋找尾節點
        p = p -> next;
    }
    p -> next = s;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    MyLinkedList *p = obj -> next, *q = obj;
    int j = 0;

    while(p != NULL && j < index) {     
        j ++;
        p = p -> next;
        q = q -> next;
   }
   if (p != NULL || j  >= index) {
       p = (MyLinkedList *)malloc(sizeof(MyLinkedList));
       p -> data = val;
       p -> next = q -> next;
       q -> next = p;
   }
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    int j=0;
    MyLinkedList *p = obj->next,*q = obj;
    while(p!=NULL&&j<index)//從第0個節點開始找到第index個結點，並用p指向第index個節點，q指向第index個的前驅結點
    {
        j++;
        p = p->next;
        q = q->next;
    }
    //if(p==NULL||j>index) return;
    //else
    if(p!=NULL&&index>=0)//第index個結點存在，則刪除,index<0即index爲無效值，則不刪除
    {
        q->next=p->next;
        free(p);
        p = q->next;
    }
}

void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList *p = obj, *q = p -> next;
    while(q != NULL) {
        free(p);
        p = q;
        q = q -> next;
    }
    free(p);    //釋放最後一個結點
}





int main() {
    MyLinkedList* obj = myLinkedListCreate();
    int param_1 = myLinkedListGet(obj, 1);
    myLinkedListAddAtHead(obj, 3);

    return 0;
}
