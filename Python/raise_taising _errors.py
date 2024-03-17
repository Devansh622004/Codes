num = int(input("ENTER A NUMBER BETWEEN 1 AND 5: "))

if num < 1 or num > 5:
    raise ValueError("VALUE SHOULD BE IN BETWEEN 1 AND 5")
else:
    print(num, "IS THE NUMBER YOU ENTERED")