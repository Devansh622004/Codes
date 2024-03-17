n = input("ENTER THE NUMBER OF WHICH YOU WANT TO PRINT MULTIPLICATION TABLE")

print(f"MULTIPLICATION TABLE OF {n} IS:\n")


try:
    for i in range(1, 11):
        print(f"{int(n)} X {int(i)} =  {int(n * i)}")

except :
    print("SORRY WRONG INPUT TYPE.")

print("END OF THE PROGRAM")