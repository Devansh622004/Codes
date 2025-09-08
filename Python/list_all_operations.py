# LIST CREATION, slici, del
list1 = [22, 11, 55, 33, 44]

# ACCESSING
print("ACCESSING LIST: ")
print(list1, "\n")

# SORTING
print("SORTING: ")
list1.sort()
print(list1, "\n")

# TRAVERSING
print("TRAVERSING: ")
for item in list1:
    print(item)
print("\n")

# LENGTH
print("LENGTH OF THE LIST: ", len(list1), "\n")

# REVERSING
print("REVERSE OF THE LIST: ")
list1.reverse()
print(list1, "\n")

# MODIFYING
print("MODIFYING THE LIST: ")
list1[0] = 0
print(list1[0], "\n")

# SLICING
print("SLICING THE LIST: ")
print(list1[2:4], "\n")

# DELETING
print("DELETING")
list1.pop(0)
print(list1)