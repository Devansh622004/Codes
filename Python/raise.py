x = int(input("ENTER A NO. BETWEEN 1 TO 9: "))

if x < 1 or x > 9:
    raise ValueError("THE VALUE SHOULD BE BETWEEN 1 TO 9")