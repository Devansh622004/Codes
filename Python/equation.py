# 1 + 2/2! + 3/3! + ... + n/n!

def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

n = int(input("ENTER A NO.: "))
Sum = 0
for i in range(1, n+1):
    Sum = Sum + i / factorial(i)

print("SUM OF THE SERIES:-", Sum)
