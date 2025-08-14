# In Python, eval() is a built-in function that takes a string and evaluates it as a Python expression,
# returning the result.

x = 10
y = 5
result = eval("x + y")
print(result)  # Output: 15

eval("min(3, 7, 2)")  # Output: 2

# ⚠️ Security Warning
#
#    eval() will execute any code you pass to it.
#    If that code comes from an untrusted source, it can run malicious commands.
