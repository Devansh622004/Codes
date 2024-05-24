#  DICTIONARY UNPACKING

x = {"a": 1, "b": 2}
y = {"b": 3, "c": 4}
z = {**x, **y}               # HERE DUPLICATE VALUES EXIXT, HENCE THE DUPLIC. VL. OF SECOND DICT. IS CONSIDERED
print(z)


x = (1, 2, [3, 4])
x[2][0] = 5
print(x)