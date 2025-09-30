import math

# Function to calculate permutations P(n, r)
def permutations(n, r):
    return math.factorial(n) // math.factorial(n - r)

# Function to calculate combinations C(n, r)
def combinations(n, r):
    return permutations(n, r) // math.factorial(r)

# Main program
n = int(input("Enter n: "))
r = int(input("Enter r: "))

if r > n or n < 0 or r < 0:
    print("Invalid input! Ensure that n >= r and both are non-negative.")
else:
    p = permutations(n, r)
    c = combinations(n, r)

    print(f"P({n}, {r}) = {p}")
    print(f"C({n}, {r}) = {c}")

