l = [1, "ram pal", 3, "JAI", 7, "MEHER", 10, "BABA"]

print(l)
print(type(l))

print(l[0])
print(l[1])
print(l[3-1])
# print(l[3])

# ******************************************NEGATIVE INDEX****************************************************

print(l[-3])             #   l[-3]  =  l[length(l) - 3]
print(l[len(l) - 3])

#      TO FIND A PARTICULAR ITEM OR ELEMENT IN LIST

if 7 in l:
    print('YES')
else:
    print('NO')

print(l[:])
print(l[1:])
print(l[:3])
print(l[2:5])


#              JUMP INDEX

print(l[1:5:2])