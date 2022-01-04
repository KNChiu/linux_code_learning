#include <stdio.h>

int  main(){
    int n = 19;                     // 待測數
    int digit = sizeof(n) * 8;      // 待測數為幾位元.
    int cnt = 0;                      // Counter
    for(int i = 0; i < digit; i ++) {
        if(n & (1 << i)){
            cnt += 1;
        }
    }
    printf("Result : %d\n", cnt);

}
