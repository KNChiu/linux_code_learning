#include <stdio.h>
#include <stdlib.h>

int pivotIndex(int* nums, int numsSize){
    if (numsSize == 0||numsSize == 2)
        return -4;
    if (numsSize == 1)
        return 0;

    int sleft = 0, sright = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++) {
        printf("%d ", i);
        
        for (int j = 0; j < i; j++)
            sleft = sleft + nums[j];
        for (int k = i + 1; k < numsSize; k++)
            sright = sright + nums[k];
        
        printf("sleft :%d", sleft);
        printf("sright :%d", sright);
        printf("\n");
        
        if (sleft == sright)
            break;
        
        sleft = 0;
        sright = 0;
   }
   if (i == numsSize)
       return -1;
   return i;
}
