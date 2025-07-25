n = int(input("ENTER A NO.: "))
m = int(input("ENTER ANOTHER NO.: "))

cube = lambda x: x*x*x
AVG = lambda x,y: (x + y) / 2

print(f"THE CUBE OF {n} IS:- ", cube(n))
print(f"THE AVERAGE OF {n} & {m} IS: ", AVG(n, m))

# THE MAIN USE CASE OF LAMBDA FUNCTION IS THAT YOU  CAN PASS FUNC. AS ARGUMENT TO OTHER FUNCTION.

def func_1(square, value):
    return 5 + func_2(value)

func_2 = lambda x: x*x

print(f"THE VALUE OF SQUARE OF {n} + 5 IS: ", func_1(func_2, 2))