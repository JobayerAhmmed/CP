from turtle import right


class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """

        if len(s) == 1:
            return s
        if s == sorted(s):
            return s
        s_len = len(s)
        # p_len = s_len
        # is_found = None
        # while not is_found and p_len > 1:
        #     start = 0
        #     end = p_len
        #     # print('p_len ', p_len, ' start ', start, ' end ', end)
        #     while not is_found and end <= s_len:
        #         is_found = self.is_palindrome(s[start:end])
        #         start += 1
        #         end += 1
        #     if not is_found:
        #         p_len -= 1
        # if not is_found:
        #     return s[0]
        # return is_found
        mid = s_len // 2
        max_p = s[mid]
        max_len = 1
        index = mid
        left = index - 1
        right = index + 1
        curr_len = 1
        while left >= 0 and right < s_len:
            if s[left] != s[right]:
                if curr_len > max_len:
                    max_len = curr_len
                    max_p = s[left+1:right]
                curr_len = 1
                index += 1
                left = index - 1
                right = index + 1
            else:
                curr_len += 2
                left -= 1
                right += 1
        if curr_len > max_len:
            max_len = curr_len
            max_p = s[left+1:right]
        if max_len == s_len:
            return max_p

        index = mid - 1
        left = index - 1
        right = index + 1
        curr_len = 1
        while left >= 0 and right < s_len:
            if s[left] != s[right]:
                if curr_len > max_len:
                    max_len = curr_len
                    max_p = s[left+1:right]
                curr_len = 1
                index -= 1
                left = index - 1
                right = index + 1
            else:
                curr_len += 2
                left -= 1
                right += 1
        if curr_len > max_len:
            max_len = curr_len
            max_p = s[left+1:right]
        if max_len == s_len:
            return max_p

        mid1 = mid
        mid2= mid1 + 1
        while mid2 < s_len and s[mid1] != s[mid2]:
            mid1 = mid2
            mid2 += 1
        if mid2 < s_len and s[mid1] == s[mid2]:
            left = mid1 - 1
            right = mid2 + 1
            curr_len = 2
            while left >= 0 and right < s_len:
                if s[left] != s[right]:
                    if curr_len > max_len:
                        max_len = curr_len
                        max_p = s[left+1:right]
                    mid1 = mid1 + 1
                    mid2 = mid1 + 1
                    while mid2 < s_len and s[mid1] != s[mid2]:
                        mid1 = mid2
                        mid2 += 1
                    left = mid1 - 1
                    right = mid2 + 1
                    curr_len = 2
                else:
                    curr_len += 2
                    left -= 1
                    right += 1
            if curr_len > max_len:
                max_len = curr_len
                max_p = s[left+1:right]
            if max_len == s_len:
                return max_p

        mid1 = mid - 1
        mid2= mid
        while mid1 >= 0 and s[mid1] != s[mid2]:
            mid2 = mid1
            mid1 -= 1
        if mid1 >= 0 and s[mid1] == s[mid2]:
            left = mid1 - 1
            right = mid2 + 1
            curr_len = 2
            while left >= 0 and right < s_len:
                if s[left] != s[right]:
                    if curr_len > max_len:
                        max_len = curr_len
                        max_p = s[left+1:right]
                    mid2 = mid2 - 1
                    mid1 = mid2 - 1
                    while mid1 >= 0 and s[mid1] != s[mid2]:
                        mid2 = mid1
                        mid1 -= 1
                    left = mid1 - 1
                    right = mid2 + 1
                    curr_len = 2
                else:
                    curr_len += 2
                    left -= 1
                    right += 1
            if curr_len > max_len:
                max_len = curr_len
                max_p = s[left+1:right]
            if max_len == s_len:
                return max_p

        return max_p

    # def is_palindrome(self, text):
    #     text_len = len(text)
    #     mid = len(text)//2
    #     if text_len % 2 == 0:
    #         return text if text[:mid] == text[mid:][::-1] else None
    #     return text if text[:mid] == text[mid+1:][::-1] else None

s = Solution()
print(s.longestPalindrome('a'))
print(s.longestPalindrome('aaaa'))
print(s.longestPalindrome('bababab'))
print(s.longestPalindrome('dbababab'))
print(s.longestPalindrome('cbbd'))
print(s.longestPalindrome('babadada'))
print(s.longestPalindrome('qbmhukucteihghldwdobtvgwwnhflpceiwhbkmvxavmqxedfndegztlpjptpdowwavemasyrjxxnhldnloyizyxgqlhejsdylvkpdzllrzoywfkcamhljminikvwwvqlerdilrdgzifojjlgeayprejhaequyhcohoeonagsmfrqhfzllobwjhxdxzadwxiglvzwiqyzlnamqqsastxlojpcsleohgtcuzzrvwzqugyimaqtorkafyebrgmrfmczwiexdzcokbqymnzigifbqzvfzjcjuugdmvegnvkgbmdowpacyspszvgdapklrhlhcmwkwwqatfswmxyfnxkepdotnvwndjrcclvewomyniaefhhcqkefkyovqxyswqpnysafnydbiuanqphfhfbfovxuezlovokrsocdqrqfzbqhntjafzfjisexcdlnjbhwrvnyabjbshqsxnaxhvtmqlfgdumtpeqzyuvmbkvmmdtywquydontkugdayjqewcgtyajofmbpdmykqobcxgqivmpzmhhcqiyleqitojrrsknhwepoxawpsxcbtsvagybnghqnlpcxlnshihcjdjxxjjwyplnemojhodksckmqdvnzewhzzuswzctnlyvyttuhlreynuternbqonlsfuchxtsyhqlvifcxerzqepthwqrsftaquzuxwcmjjulvjrkatlfqshpyjsbaqwawgpabkkjrtchqmriykbdsxwnkpaktrvmxjtfhwpzmieuqevlodtroiulzgbocrtiuvpywtcxvajkpfmaqckgrcmofkxynjxgvxqvkmhdbvumdaprijkjxxvpqnxakiavuwnifvyfolwlekptxbnctjijppickuqhguvtoqfgepcufbiysfljgmfepwyaxusvnsratn'))