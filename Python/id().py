#  In Python, id() function is a built-in function that returns the unique identifier of an object.
#  The identifier is an integer, which represents the memory address of the object. The id() function
#  is commonly used to check if two variables or objects refer to the same memory location.

x = 42
y = x
z = 42

print(id(x))
print(id(y))  # (same as x)
print(id(z))  # (same as x and y)