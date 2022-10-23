#include <stdio.h>
#include <stdlib.h>





int main(){
    int N = 5566;
    int sum = 0;
    int x = 1;
    while(N > 0){
        sum += N%10;
        x *= N%10;
        N = N / 10;
    }
    printf("%d\n", sum);
    printf("%d\n", x);
    printf("%d\n", sum + x);
    return sum + x;
}
