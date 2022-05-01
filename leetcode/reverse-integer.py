import sys


class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x > -10 and x < 10:
            return x
        max = pow(2, 31) - 1
        min = pow(-2, 31)
        is_negative = True if x < 0 else False
        if is_negative:
            x = (-1) * x
        x_str = str(x)
        x_str = x_str[::-1]
        zero_count = 0
        while x_str[zero_count] == '0':
            zero_count += 1
        x_str = x_str[zero_count:]
        x = int(x_str)
        if is_negative:
            x = x * (-1)
        if x < min or x > max:
                return 0
        return x
        
s = Solution()
print(s.reverse(123))
print(s.reverse(-123))
print(s.reverse(120))
print(s.reverse(-2147483648))
print(s.reverse(2147483647))
print(s.reverse(-8463847412))
print(s.reverse(7463847412))