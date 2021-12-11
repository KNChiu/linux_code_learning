#include <stdio.h>

#define MAX(A, B) ( (A) >= (B) ? (A) : (B) )

int main(void){
    printf("%d", MAX(1, 2));
    return 0;
}
