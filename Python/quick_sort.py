def quick_sort(arr, low, high):
    if low < high:
        pivot_index = partition(arr, low, high)
        quick_sort(arr, low, pivot_index - 1)
        quick_sort(arr, pivot_index + 1, high)

def partition(arr, low, high):
    pivot = arr[low]
    i = low + 1
    j = high

    while True:
        while i <= high and arr[i] < pivot:
            i += 1
        while arr[j] > pivot:
            j -= 1

        if i < j:
            arr[i], arr[j] = arr[j], arr[i]
        else:
            break

    arr[low], arr[j] = arr[j], pivot
    return j

# Main code
n = int(input("How many elements? "))
arr = [int(input(f"Element {i+1}: ")) for i in range(n)]

quick_sort(arr, 0, n - 1)

print("Array after sorting:", *arr)  # HERE "*" IN "*arr" IS UNPACKING OPERATOR.