# Source: https://leetcode.com/problems/add-two-numbers/
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        forward = None
        val = l1.val + l2.val
        if val // 10 == 1: # floor divisoin
            forward = 1
            val = val % 10
        else: 
            forward = None
        root = ListNode(val)
        current = root
        l1 = l1.next
        l2 = l2.next
        while True:
            if l1 == None and l2 == None:
                if forward:
                    current.next = ListNode(forward)
                break
            if l1 == None:
                val = l2.val if not forward else l2.val + forward
                l2 = l2.next
            elif l2 == None:
                val = l1.val if not forward else l1.val + forward
                l1 = l1.next
            else:
                val = l1.val + l2.val if not forward else l1.val + l2.val + forward
                l1 = l1.next
                l2 = l2.next
            if val // 10 == 1: # floor divisoin
                forward = 1
                val = val % 10
            else: 
                forward = None
            current.next = ListNode(val)
            current = current.next
        return root
        