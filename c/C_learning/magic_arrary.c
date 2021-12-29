#include <stdio.h>
#define MAX_SIZE 15

int main(void){
    int square[MAX_SIZE][MAX_SIZE];
    int i, j, row, column;
    int count;
    int size;

    printf("Size of the square:");
    scanf("%d", &size);
    
    // 檢查輸入範圍
    if (size < 1 || size > MAX_SIZE+1) {
        fprintf(stderr, "Out of range\n");
        //exit(EXIT_FAILURE);
    }
    // 是否為奇數
    if (!(size %2)) {
        fprintf(stderr, "Size is even\n");
        //exit(EXIT_FAILURE);
    }
    // 將矩陣歸零
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            square[i][j] = 0;
        }
    }

    square[0][(size - 1)/2] = 1;    // 將第一列的中心填1https://www.youtube.com/watch?v=iTe65iEt1Pc&list=RDiTe65iEt1Pc&start_radio=1
    
    i = 0;
    j = (size - 1)/2;
    
    for ( count = 2; count <= size * size; count++) {
       row = (i - 1 < 0) ? (size - 1) : (i - 1);        // 列
       column = (j - 1 < 0) ? (size - 1) : (j - 1);     // 行
       if (square[row][column]) {
           i = (++i) % size;
       } else {
          i = row;
          j = (j - 1 < 0) ? (size - 1) : --j;
       }
       square[i][j] = count;
    }

    printf("Magic Square of size %d : \n\n", size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%5d", square[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
