#include <stdio.h>
#include <stdlib.h>

int a = 0xF0F0;
int b = 0x0101;
int c = 0;


int main(){
    c = a&(~b);
    c = c | b;
    printf("%d", c);
    return 0;
}
