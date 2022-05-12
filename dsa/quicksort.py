from typing import List


def quick_sort(arr: List[int], left: int, right: int) -> None:
    i, j = left, right

    # partition
    while i <= j:
        pivot = arr[left + (right - left)//2]
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
        quick_sort(arr, left, j)
    if i < right:
        quick_sort(arr, i, right)

		
array = [10, 7, 8, 9, 1, 5]
quick_sort(array, 0, len(array) - 1)
print(f'Sorted array: {array}')