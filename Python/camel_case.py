x = input("camelCase: ")

print("snake_case: ", end="")
for i in x:
    if i == i.upper():
        print("_" , i.lower(), sep="" ,end="")
    else:
        print(i, end="")