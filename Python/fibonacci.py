def fibo(x):
    if x < 0:
        print("ENTER (+)ve NO.")
        return None
    elif x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibo(x-1) + fibo(x-2)

n = int(input("ENTER A NO: "))
m = fibo(n)
print(m)
