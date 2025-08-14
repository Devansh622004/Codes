import random
import time
import matplotlib.pyplot as plt

# Quick Sort implementation
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

# Test for different sizes of n
sizes = [1000, 2000, 3000, 4000, 5000]
times = []

for n in sizes:
    arr = [random.randint(0, 100000) for _ in range(n)]
    start_time = time.time()
    quick_sort(arr)
    end_time = time.time()
    elapsed_time = end_time - start_time
    times.append(elapsed_time)
    print(f"n = {n}, Time Taken = {elapsed_time:.6f} seconds")

# Plot graph
plt.plot(sizes, times, marker='o')
plt.title("Quick Sort Performance")
plt.xlabel("Number of Elements (n)")
plt.ylabel("Time Taken (seconds)")
plt.grid(True)
plt.show()
