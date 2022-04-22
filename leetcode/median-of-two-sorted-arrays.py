class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums = []
        i = j = k = 0
        m = len(nums1)
        n = len(nums2)
        while i < m and j < n:
            if nums1[i] <= nums2[j]:
                nums.append(nums1[i])
                i += 1
            else:
                nums.append(nums2[j])
                j += 1
        while i < m:
            nums.append(nums1[i])
            i += 1
        while j < n:
            nums.append(nums2[j])
            j += 1

        k = m + n
        if k % 2 == 0:
            return (nums[k/2 - 1] + nums[k/2])/2.0
        return nums[k/2] * 1.0