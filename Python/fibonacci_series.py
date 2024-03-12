# LOGIC OF FIBONACCI SERIES IS :-
# f(0) = 0
# f(1) = 1
# f(2) = f(0) + f(1)
# f(n) = f(n-1) + f(n-2)

# WAP TO MAKE A FIBONACCI SERIES USING RECURSION

def fibonacci(n):
    if n == 0 or n == 1:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)


print(fibonacci(4))