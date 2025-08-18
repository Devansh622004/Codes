# Check if a number is prime
def is_prime(n):
    if n < 2:
        return False          # Numbers less than 2 are not prime
    for i in range(2, n):     # Loop from 2 to n-1
        if n % i == 0:        # If n is divisible by any number other than 1 & itself
            return False      # then it's not prime
    return True               # Otherwise, it's prime

print("Twin primes less than 1000:")
for num in range(3, 1000, 2):                   # Loop through odd numbers from 3 to 999
    if is_prime(num) and is_prime(num + 2):     # Check twin prime condition
        print(num, num + 2)
