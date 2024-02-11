while True:
        x = input("Fraction: ")
        try:
            first,last = x.split("/")
            first = int(first)
            last = int(last)

            D = first / last
            if D <= 1:
                break

        except (ValueError, ZeroDivisionError):
            pass


p = int(D * 100)

if p >= 99:
    print("F")

elif p <= 1:
    print("E")

else:
    print(f"{p}%")

