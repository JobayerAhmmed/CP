class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        if n == 0:
            return [0]
        data = [0]*(n+1)
        data[1] = 1

        def count_r(x):
            if x == 0:
                return 0
            data[x] = (x % 2) + count_r(x//2)
            return data[x]

        for i in range(n, 1, -1):
            if data[i] == 0:
                data[i] = count_r(i)
        return data

    def countBits2(self, n):
        dp = [0]*(n+1)
        offset = 1
        for i in range(1, n+1):
            if offset*2 == i:
                offset = i
            dp[i] = 1 + dp[i-offset]
        return dp

s = Solution()
print(s.countBits(0))
print(s.countBits(16))
print(s.countBits2(16))
# print(s.countBits(2))
# print(s.countBits(11))
# print(s.countBits(10**5))