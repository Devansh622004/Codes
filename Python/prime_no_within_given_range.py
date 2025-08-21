print("ENTER RANGE:- ")
start = int(input("ENTER INITIAL POINT: "))
end = int(input("ENTER END POINT: "))

for i in range(start, end+1):
    if i < 2:  # skip numbers less than 2
        continue
    for j in range(2, i):
        if i % j == 0:
            break
    else:
        print(i)