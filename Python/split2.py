def add(a, b):
    return float(a+b)


def sub(a, b):
    return float(a-b)


def mul(a, b):
    return float(a*b)


def div(a, b):
    return float(a/b)


answer = input("Expression: ")

x, y, z = answer.split()

x = int(x)
z = int(z)

if y == "+":
    print(add(x, z))

elif y == "-":
    print(sub(x, z))

elif y == "*":
    print(mul(x, z))

elif y == "/":
    print(div(x,z))