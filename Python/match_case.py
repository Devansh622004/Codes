age = int(input("ENTER AGE:"))

match age:
    case 18:
        print("ELIGIBLE")
    case 17:
        print("NOT ELIGIBLE")
    case 65:
        print("NOT ELIGIBLE")
    case _:
        print("NULL")
