# MULTIPLICATION TABLE
x = int(input("ENTER THE NUBER OF WHICH YOU  WANT TO CREATE A MULTIPLICATION TABLE: "))


def main():
    table(x)


def table(n):
    for i in range(11):
        mul = i * n
        print(n, " * ", i, " = ", mul, end="")
        i = i + 1
        print()


main()