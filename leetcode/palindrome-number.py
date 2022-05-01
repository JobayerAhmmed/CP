class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False
        if x < 10:
            return True
        reverse_x = self.reverse_int(x)
        return x == reverse_x
        
    def reverse_int(self, x):
        digits = []
        rem = x
        while rem != 0:
            d = rem % 10
            rem = rem // 10
            digits.append(d)
        power = len(digits) - 1
        value = 0
        for i in digits:
            value += i * 10**power
            power -= 1
        return value
        

s = Solution()
print(s.isPalindrome(121))
print(s.isPalindrome(-123))
print(s.isPalindrome(123))
print(s.isPalindrome(2222))
print(s.isPalindrome(1221))
print(s.isPalindrome(0))
print(s.isPalindrome(-1))
print(s.isPalindrome(1))