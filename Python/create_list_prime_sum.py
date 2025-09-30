list = []
size = int(input("Enter the Size of the List: "))
for i in range(size):
    item = int(input())
    list.append(item)

print(list)

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

def sum(list):
    s = 0
    for i in list:
        s = s + i

    return s

count = 0
for i in list:
    if is_prime(i):
        count = count + 1

print("The Total No. of Prime No. in the List are: ", count)

sum = sum(list)
print("The Sum of All Elements of the List are: ", sum)