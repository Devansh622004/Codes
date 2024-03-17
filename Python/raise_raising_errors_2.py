num = input("ENTER A NUMBER BETWEEN 1 AND 5")

if num == "quit":
    print("NO ERROR OCCURRED")

else:
    num = int(num)
    if num < 1 or num > 5:
        raise ValueError("VALUE ISN'T B/W 1 AND 5")

    else:
        print("ENTERED NUMBER IS: ", num)
