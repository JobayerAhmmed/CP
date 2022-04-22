class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if len(s) == 1:
            return 1
        longest = 0
        data = []
        counter = 0
        s_len = len(s)
        i = 0
        start_index = 0
        while i < s_len:
            if s[i] in data:
                if counter > longest:
                    longest = counter
                data = data[1:]
                start_index += 1
            else:
                data.append(s[i])
                counter += 1
            i += 1
        if counter > longest:
            longest = counter
        return longest