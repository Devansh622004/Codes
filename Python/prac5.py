# CUBE OF A NUMBER

x = int(input("ENTER THE NUMBER YOU WANT TO CUBE: "))

for i in range(x):
    print(pow(i, 3), end="")
    print()


# *******************     OR    *************************


def main():
    cube(x)


def cube(y):
    for i in range(y+1):
        print(i*i*i, end="")
        print()


main()