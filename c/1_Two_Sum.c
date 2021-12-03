#include <stdio.h>
#include <cstdlib>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0,j=0;
    int *ans=(int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans[0]=i;
                ans[1]=j;
                break;
            }
        }
    }
    *returnSize=2;
    return ans;
    }


int main(int argc, char *argv[ ]){
    int nums[] = {2, 7, 11, 15};

    int numsSize = sizeof(nums)/sizeof(int);
    int target = 9;
    int returnSize = 0;
    int *return_array = NULL;
    
    return_array = twoSum(nums, numsSize, target, &returnSize);


    if (return_array == NULL)
        return 0;

    for (int i = 0; i < returnSize; i++){
        printf("%d ", return_array[i]);
    }

    return 0;
}
