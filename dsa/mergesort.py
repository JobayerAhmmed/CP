# Source: https://www.geeksforgeeks.org/merge-sort/
def sort(data):
    '''Sorts a list of items using merge sort'''
    if len(data) > 1:
        mid = len(data)//2
        L = data[:mid]
        R = data[mid:]
        sort(L)
        sort(R)
  
        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                data[k] = L[i]
                i += 1
            else:
                data[k] = R[j]
                j += 1
            k += 1
  
        while i < len(L):
            data[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            data[k] = R[j]
            j += 1
            k += 1