from typing import List


def quick_sort(arr: List[int]) -> None:
    if len(arr) < 2: 
        return

    def sort(arr: List[int], left: int, right: int):
        i, j = left, right
        pivot = arr[left + (right - left)//2]

        # partition
        while i <= j:
            while arr[i] < pivot:
                i += 1
            while arr[j] > pivot:
                j -= 1
            if i <= j:
                arr[i], arr[j] = arr[j], arr[i]
                i += 1
                j -= 1

        # recursion
        if left < j:
            sort(arr, left, j)
        if i < right:
            sort(arr, i, right)
    
    sort(arr, 0, len(arr) - 1)

		
array = [1,2,2,1,1,2]
quick_sort(array)
print(f'Sorted array: {array}')