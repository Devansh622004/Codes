x = int(input("ENTER A NO.: "))

if x <= 1:
    print("NOT A PRIME NO.")
else:
    for i in range(2, x):
        if x % i == 0:
            print("COMPOSITE NO.")
            break
    else:
        print("PRIME NO.")



# PROGRAM:-
# reverse of a no.
