# Source: https://www.geeksforgeeks.org/python-program-for-binary-search/
def search(data, x):
    '''Find x from a list of items using binary search'''  
    low = 0
    high = len(data) - 1
    mid = 0
 
    while low <= high:
        mid = low + (high - low) // 2
 
        if data[mid] < x:
            low = mid + 1
        elif data[mid] > x:
            high = mid - 1
        else:
            return mid
    return None

def search(data, x, l, r):
    '''Find x from a list of items within index l to r using binary search.
    Returns the index of x. If not found, returns None.
    '''  
    low = l
    high = r
    mid = 0
 
    while low <= high:
        mid = low + (high - low) // 2
 
        if data[mid] < x:
            low = mid + 1
        elif data[mid] > x:
            high = mid - 1
        else:
            return mid
    return None