str = input("Input: ")

for i in str:
    if i in ['a', 'e', 'i', 'o', 'u']:
        print("", end="")
    elif i in ['A', 'E', 'I', 'O', 'U']:
        print("", end="")
    else:
        print(i, end="")

