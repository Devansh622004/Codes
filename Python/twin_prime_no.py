# Check if a number is prime
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

print("Twin primes less than 1000:")
for num in range(3, 1000, 2):
    if is_prime(num) and is_prime(num + 2):
        print(num, num + 2)
