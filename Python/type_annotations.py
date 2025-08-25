# 🔹 Type Annotations in Python
#
# Type annotations (also called type hints) are a way to tell what kind of data type a variable, function parameter, or
# return value should have.
# They don’t change how Python runs (Python is still dynamically typed), but they make the code clearer and less error-prone.

# ✅ Example without type annotation:-

def add(a, b):      # Here, we don’t know if a and b are integers, floats, or strings.
    return a + b

# ✅ Example with type annotation:-

def add2(a: int, b: int):
    return a + b

# This tells us:-
# a should be an integer
# b should be an integer
# function returns an integer
