x=(1,6,7)
print(2*x)

y = [1, 3, 3 * x]
print(y)

c = (y, x)
print(c)

z = (2, 'ram', True)
print(z)

# del x                           // HERE TUPLE 'x' IS DELETE.
# print(x)

n = ("amar", "akbar", "anthony")
print(n[-1:0])

x1 = (1, 5, 4, 6)
x2 = (1, 2, 3, 4)
print(x1 < x2)

a = (1, 2)
b = (3, 4)
a, b = (b, a)
print(a)
print(b)

def my():
    return (1, 2), (3, 4)


a, b = my()
print(a)
print(b)
