n = int(input(("ENTER THE FIRST n ODD NO.s")))

sum = 0

for i in range(n):
    if i % 2 != 0:
        print(i, end="")
        print()
        sum = sum + i

print("SUM = ", sum)