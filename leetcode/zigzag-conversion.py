class Solution(object):
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        s_len = len(s)
        if numRows == 1 or s_len <= numRows:
            return s
        data = []
        for i in range(numRows):
            data.append([s[i]])
        col = numRows - 2
        is_plus = False
        for i in range(numRows, s_len):
            data[col].append(s[i])
            if is_plus:
                col += 1
            else:
                col -= 1
            if col == -1:
                col = 1
                is_plus = True
            elif col == numRows:
                col = numRows - 2
                is_plus = False
        r = ''
        for i in range(numRows):
            r = r + ''.join(data[i])
        return r

s = Solution()
print(s.convert('PAYPALISHIRING', 4))
print(s.convert('PAYPALISHIRING', 3))
print(s.convert('PAY', 4))