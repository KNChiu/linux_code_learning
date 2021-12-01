#include <stdio.h>

int main(void){
    int a, b, temp;
    int *p1, *p2;

    printf("請輸入a :");
    scanf("%d", &a);

    printf("請輸入b :");
    scanf("%d", &b);
    
    printf("&a: %p\n", &a);
    printf("&b: %p\n", &b);
    
    printf("\n");
    p1 = &a;
    p2 = &b;

    if (*p1 < *p2){
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    printf("p1: %p\n", p1);
    printf("p2: %p\n", p2);

    printf("*p1: %d\n", *p1);
    printf("*p2: %d\n", *p2);

}
