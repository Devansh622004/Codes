def average(*numbers):
    sum = 0
    for i in numbers:
        sum = sum + i
    print(sum/len(numbers))
    print(type(numbers))             # TUPLE


average(5, 6, 7, 8, 9)                     # arbitrary_arguments