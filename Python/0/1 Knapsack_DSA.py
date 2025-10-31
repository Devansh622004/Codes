def knapsack(weights, values, capacity):
    n = len(weights)

    # Step 1: DP table (n+1) x (capacity+1)
    dp = [[0] * (capacity + 1) for _ in range(n + 1)]

    # Step 2: Fill DP table
    for i in range(1, n + 1):
        for w in range(capacity + 1):
            # Step 3: Check if current item fits in the knapsack
            if weights[i - 1] <= w:
                # Option 1: Include item
                # Option 2: Exclude item
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w])
            else:
                # If item doesn't fit, exclude it
                dp[i][w] = dp[i - 1][w]

    # Step 4: Return maximum value
    return dp[n][capacity]


# Example
weights = [1, 3, 4, 5]
values = [1, 4, 5, 7]
capacity = 7

result = knapsack(weights, values, capacity)
print("Maximum value that can be obtained:", result)
