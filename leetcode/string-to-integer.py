class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.strip()
        if s == '':
            return 0
        
        is_negative = False
        if s[0] == '+' or s[0] == '-':
            if s[0] == '-':
                is_negative = True
            s = s[1:]
        s_len = len(s)
        count = 0
        while count < s_len and s[count] >= '0' and s[count] <= '9':
            count += 1
        s = s[:count]
        if s == '':
            return 0
        value = int(s)
        if is_negative:
            value = value * (-1)
        if value > 2**31 - 1:
            value = 2**31 - 1
        if value < -2**31:
            value = -2**31
        return value
        
s = Solution()
print(s.myAtoi(''))
print(s.myAtoi('42'))
print(s.myAtoi('   -42'))
print(s.myAtoi('4193 with words'))
print(s.myAtoi('-2147483648'))
print(s.myAtoi('2147483648'))
print(s.myAtoi('words and 987'))