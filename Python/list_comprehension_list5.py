lst = [i for i in range(4)]
print(lst)

#    IF WE WANT LIST OF SQUARES

squares = [i*i for i in range(5)]
print(squares)

#    IF WE WANT TO STORE SELECTED ELEMENTS OR ITEMS I  LIST

selected = [i for i in range(10) if i%2 == 0]
print(selected)

# 3. Using if-else Condition in List Comprehension
# Example: Replacing even numbers with "Even" and odd numbers with "Odd"
numbers = ["Even" if x % 2 == 0 else "Odd" for x in range(5)]
print(numbers)  # Output: ['Even', 'Odd', 'Even', 'Odd', 'Even']

# 4. Nested Loops in List Comprehension
# Example: Creating pairs from two lists
pairs = [(x, y) for x in range(2) for y in range(3)]
print(pairs)  # Output: [(0, 0), (0, 1), (0, 2), (1, 0), (1, 1), (1, 2)]

# 5. List Comprehension with Functions
# Example: Converting a list of strings to uppercase
words = ["hello", "world", "python"]
upper_words = [word.upper() for word in words]
print(upper_words)  # Output: ['HELLO', 'WORLD', 'PYTHON']

# 6. List Comprehension with Nested List Comprehension
# Example: Flattening a 2D list
matrix = [[1, 2], [3, 4], [5, 6]]
flattened = [num for row in matrix for num in row]
print(flattened)  # Output: [1, 2, 3, 4, 5, 6]

# 7. List Comprehension with Set and Dictionary Comprehensions
# Set Comprehension
unique_numbers = {x for x in [1, 2, 2, 3, 4, 4]}
print(unique_numbers)  # Output: {1, 2, 3, 4}

# Dictionary Comprehension
squared_dict = {x: x**2 for x in range(5)}
print(squared_dict)  # Output: {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}

# 8. When to Use List Comprehensions?
# You need to create a list in a single line
# The logic is simple and readable
# You want to improve performance (faster than loops)
# Avoid when:
#
# The logic is too complex (use a standard loop instead for clarity)

# 9. Performance Comparison: List Comprehension vs. Loop
import time

# Using a for loop
start = time.time()
squares_loop = []
for x in range(10**6):
    squares_loop.append(x**2)
print("Loop time:", time.time() - start)

# Using list comprehension
start = time.time()
squares_comp = [x**2 for x in range(10**6)]
print("List Comprehension time:", time.time() - start)

# List comprehensions are generally faster than loops because they are optimized internally by Python.