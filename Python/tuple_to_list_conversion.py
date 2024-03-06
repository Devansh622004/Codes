tup1 = (1, 2, 'JAI SHREE RAM', 5, 'JAI MEHER BABA')

print(tup1)

temp = list(tup1)                 # CONVERTING TUPLE TO LIST

temp.append('RADHA')              # APPENDING LIST

print(temp)

#     MANIPULATING  /   CHANGING THE ITEMS OF THE TUPLE AFTER CONVERTING IT TO LIST.

temp[1] = 'hanuman ji'

print(temp)

#     DELETING THE ITEMS OF THE TUPLE AFTER CONVERTING IT TO LIST.

temp.pop(3)
print(temp)

#     FINALLY AFTER DOING ALL TYPES OF MANIPULATION CONVERT THE LIST TO TUPLE.

tup1 = tuple(temp)
print(tup1)


