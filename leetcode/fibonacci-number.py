class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return n
        f = [0]*(n+1)
        f[1] = 1
        for i in range(2, n+1):
            f[i] = f[i-2] + f[i-1]
        return f[n]

    def fib2(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return n
        data = [None]*(n+1)
        data[0] = 0
        data[1] = 1

        def fib_r(x):
            if data[x] is not None:
                return data[x]
            data[x] = fib_r(x-1) + fib_r(x-2)
            return data[x]

        return fib_r(n)
            
        
s = Solution()
print(s.fib(0))
print(s.fib(1))
print(s.fib(2))
print(s.fib(3))
print(s.fib(4))
print(s.fib(5))
print(s.fib(30))