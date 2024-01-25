# FINDING AVERAGE
n = int(input("ENTER THE TOTAL NUMBERS YOU WANT TO SUM: "))


def avrg(x):
    summation = 0
    for i in range(x):
        summation = summation + i
        i += 1

    print("SUM = ", summation/x)


def main():
    avrg(n)


main()