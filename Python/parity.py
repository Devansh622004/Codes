def main():
    x = input("ENTER x ")

    is_even(x)

def is_even(a):
    if a % 2 == 0:
        print("EVEN")
    else:
        print("ODD")

main()