x = int(input("WHAT'S THE VALUE OF x ? "))

match x:
    case 0:
        print("x is ZERO")
    case 1:
        print("x is ONE")
    case _ if x != 9:
        print(x, "is not NINE")
    case _ if x != 10:
        print(x, "is not TEN")
    case _:                       # (_) UNDERSCORE IS USED IN PYTHON AS 'default' KEYWORD IS USED IN C\C++
        print("x is", x)