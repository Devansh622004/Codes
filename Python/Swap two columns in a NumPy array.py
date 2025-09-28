import numpy as np

# Create a sample 2D array
arr = np.array([[1, 2, 3],
                [4, 5, 6],
                [7, 8, 9]])

print("Original Array:")
print(arr)

# Swap column 0 and 2
arr[:, [0, 2]] = arr[:, [2, 0]]

print("\nArray after swapping columns 0 and 2:")
print(arr)
