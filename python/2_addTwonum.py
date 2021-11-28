# # Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1, l2):
        carry = nmsum = 0
        temp = ListNode(0)
        outAns = temp
        while l1 != None or l2 != None or nmsum != 0:
            if l1 != None:
                nmsum += l1.val
                l1 = l1.next
            
            if l2 != None:
                nmsum += l2.val
                l2 = l2.next
            
            carry = nmsum % 10
            nmsum = nmsum // 10
                
            temp.next = ListNode(carry)
            temp = temp.next

        return outAns.next


if __name__ == "__main__":
    pass
