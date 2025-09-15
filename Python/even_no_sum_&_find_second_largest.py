list1 = []
size = int(input("Enter Size of the List."))

for i in range(size):
    item = int(input())
    list1.append(item)

sum1 = 0
for i in list1:
    if i % 2 == 0:
        sum1 = sum1 + i

print("Sum of Even no. is: ", sum1)

list1.sort()
print("List Elements are: \n", list1)

print("Second Largest Element in the List: ", list1[-2])

