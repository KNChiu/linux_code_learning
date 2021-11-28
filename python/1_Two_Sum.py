
from typing import List
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for n in range(len(nums)):
                if i != n :
                    if int(nums[i]) + int(nums[n]) == target:
                        return (i,n)

    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        carry = 0
        outList = []
        print(l1.val)
        # print(l1.next)
        for i in range(len(l1)):
            print(carry + int(l1[i]) + int(l2[i]))
            if carry + int(l1[i]) + int(l2[i]) > 9:
                outList.append(carry + int(l1[i]) + int(l2[i]) - 10)
                carry = 1
            else:
                outList.append(carry + int(l1[i]) + int(l2[i]))
                carry = 0

        return outList

if __name__ == "__main__":
    S = Solution()
    print(S.addTwoNumbers([2,4,3], [5,6,4]))
