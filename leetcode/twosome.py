# Source: https://leetcode.com/problems/two-sum/
# Sort the list and find the neartest element of the target.
# Subtract current element from target and search for that 
# remaining part between next element of current to nearest element.
def twoSum(self, nums, target):
    """
    :type nums: List[int]
    :type target: int
    :rtype: List[int]
    """
    if len(nums) == 2:
        return [0,1]
    
    nums_with_index = [(nums[i], i) for i in range(len(nums))]
    nums_with_index.sort(key=lambda x: x[0])
    
    # Find the nearest element index of target
    near_target_index = None
    for i in range(len(nums_with_index)):
        if nums_with_index[i][0] >= target:
            near_target_index = i

    remaining_from_target = None
    for i in range(len(nums_with_index)):
        remaining_from_target = target - nums_with_index[i][0]
        low = i + 1
        high = len(nums_with_index) - 1
        if near_target_index:
            high = near_target_index
        index2 = search(nums_with_index, remaining_from_target, low, high)
        if index2:
            return [nums_with_index[i][1], nums_with_index[index2][1]]

def search(data, x, l, r):
    '''Find x from a list of items within index l to r using binary search.
    Returns the index of x. If not found, retrns None.
    '''  
    low = l
    high = r
    mid = 0
 
    while low <= high:
        mid = low + (high - low) // 2
 
        if data[mid][0] < x:
            low = mid + 1
        elif data[mid][0] > x:
            high = mid - 1
        else:
            return mid
    return None