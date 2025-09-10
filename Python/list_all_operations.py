# List operations in Python

# Creating a list
my_list = [10, 20, 30, 40, 50]

# Accessing elements
print("First element:", my_list[0])
print("Last element:", my_list[-1])

# Slicing
print("Sliced list (1 to 3):", my_list[1:4])

# Modifying
my_list[2] = 99
print("Modified list:", my_list)

# Adding elements
my_list.append(60)
print("After append:", my_list)

my_list.insert(2, 15)
print("After insert at index 2:", my_list)

# Removing elements
my_list.remove(99)
print("After removing 99:", my_list)

my_list.pop()
print("After pop:", my_list)

# Sorting
my_list.sort()
print("Sorted list:", my_list)

# Reversing
my_list.reverse()
print("Reversed list:", my_list)

# Length
print("Length of list:", len(my_list))

# Looping through list
print("Looping through list:")
for item in my_list:
    print(item)
