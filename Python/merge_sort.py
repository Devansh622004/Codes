import random
import time
import matplotlib.pyplot as plt


# Merge Sort function
def merge_sort(arr):
    if len(arr) <= 1:
        return arr

    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])

    return merge(left, right)


# Function to merge two halves
def merge(left, right):
    result = []
    i = j = 0

    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1

    result.extend(left[i:])
    result.extend(right[j:])
    return result


# Different sizes of input
sizes = [1000, 2000, 4000, 8000, 16000]
times = []

for n in sizes:
    arr = [random.randint(1, 100000) for _ in range(n)]

    start = time.time()
    merge_sort(arr)  # call sorting function
    end = time.time()

    taken = end - start
    times.append(taken)
    print(f"{n} elements sorted in {taken:.6f} seconds")

# Plot graph
plt.plot(sizes, times, marker="o")
plt.xlabel("Number of Elements (n)")
plt.ylabel("Time Taken (seconds)")
plt.title("Merge Sort Performance")
plt.show()
