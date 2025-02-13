# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        arr1 = ''
        arr2 = ''
        while (l1):
            arr1 += str(l1.val)
            l1 = l1.next
        while (l2):
            arr2 += str(l2.val)
            l2 = l2.next
        arr1=int(arr1[::-1])
        arr2=int(arr2[::-1])
        add=arr1+arr2
        add=str(add)
        add=list(add)
        add.reverse()
        add=list(map(int,add))
        print(add)
        ans=ListNode(add[0])
        q=ans
        for i in add[1:]:
            n=ListNode(i)
            ans.next=n
            ans=ans.next
        return q
        
        