x = 10
y = "20"
print(x + int(y))

x = "ramji"
print(x[0])
print(x[3])


x = 10
y = "20"
print(str(x) + y)


x = {"a", "b", "c"}
y = {"b", "c", "d"}
z = x or y               
t = x & y                #   "&"  -->   intersection)
k = x | y
print(z)
print(t)
print(k)


x = {"a": 1, "b": 2}
y = {"b": 3, "c": 4}
z = {**x, **y}
print(z)