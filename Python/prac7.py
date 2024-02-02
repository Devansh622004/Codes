# MULTIPLICATION TABLE
x = int(input("ENTER THE NUBER OF WHICH YOU  WANT TO CREATE A VERTICAL MULTIPLICATION TABLE: "))


def main():
    table(x)


def table(n):
    for i in range(n+1):
        mul = i * 1
        print(i, " * ", "1", " = ", mul, end="❤️")
        i = i + 1
        print()


main()