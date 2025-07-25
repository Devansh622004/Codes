# THE MAIN USE CASE OF LAMBDA FUNCTION IS THAT YOU  CAN PASS FUNC. AS ARGUMENT TO OTHER FUNCTION.
n = int(input("ENTER A NO. "))

def func_1(square, value):
    return 5 + func_2(value)

func_2 = lambda x: x*x

print(f"THE VALUE OF SQUARE OF {n} + 5 IS: ", func_1(func_2, 2))