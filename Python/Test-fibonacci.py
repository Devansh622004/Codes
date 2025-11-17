# Fibonacci Series using Dynamic Programming.

def fibonacci(n):
    dp = [0] * (n + 1)                      # Create DP array to store results

    # Base cases
    if n >= 1:
        dp[1] = 1

    for i in range(2, n + 1):
        dp[i] = dp[i-1] + dp[i-2]

    return dp[n]

n = int(input("Enter number of terms: "))

print("Fibonacci Series:")
for i in range(n):
    print(fibonacci(i), end=" ")
