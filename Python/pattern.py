def main():
    wall(3)
    print()
    diwaar(3)


def wall(height):

    for i in range(height):

        for j in range(height):

            print("#", end="")

        print()

# ************************ OR *************************
def diwaar(size):
    for i in range(size):
        print("#" * 3)

main()