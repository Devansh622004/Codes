import Library

a = int(input("A = "))
b = int(input("B = "))

SUM = Library.ADD(a, b)
MINUS = Library.SUB(a, b)
PRODUCT = Library.MUL(a, b)
DIVISION = Library.DIV(a, b)

print("SUM = " , SUM)
print("MINUS = " , MINUS)
print("PRODUCT = " , PRODUCT)
print("DIVISION = " , DIVISION)