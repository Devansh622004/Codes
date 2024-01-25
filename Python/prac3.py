# SUM OF FIRST n NUMBERS
n = int(input("ENTER THE TOTAL NUMBERS YOU WANT TO SUM: "))


def add(x):
    summation = 0
    for i in range(x):
        summation = summation + i
        i += 1

    print("SUM = ", summation)


def main():
    add(n)


main()