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
