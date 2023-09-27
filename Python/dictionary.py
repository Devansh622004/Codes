name = input("name: ")
age = input("age: ")

person = {"name": name, "age": age}
print(person)


x = input("enter three no, separated by space:")
print(x, type(x))
x = x.split(' ')
print(x, type(x))