# Exercises for Practice
# Create a NumPy array with values from 10 to 100 and print its shape.
# Compare the time taken to multiply two Python lists vs. two NumPy arrays.
# Find the memory size of a NumPy array with 1 million elements.

import numpy as np
import time

arr = np.array(range(10, 101))

# or

# arr = np.arange(10, 101) // "arange()" is special function provided by NUMPY.

# Print array
print("Array:", arr)

# Print shape
print("Shape:", arr.shape)  # ".shape" attribute tells you the dimensions of the array
                            # — basically how many elements are in each axis (rows, columns, etc.).

