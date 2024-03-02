lst = [14, 25, 100, 56, 19, 22]

print(lst)

lst.append(5)
print(lst)

lst.sort()          #  FOR SORTING IN ASCENDING ORDER.
print(lst)

lst.sort(reverse=True)          #  FOR SORTING IN DESCENDING ORDER.
print(lst)

lst.reverse()          #  FOR REVERSE.
print(lst)

print(lst.index(100))     #  FOR FINDING THE INDEX VALUE OF A PARTICULAR ELEMENT.

print(lst.count(100))       #  FOR FINDING THE NUMBER OF OCCURENCES OF A PARTICULAR NUMBER.

m = lst.copy()                # FOR COPYING THE LIST TO ANOTHER VARIABLE.
print(m)

lst.insert(1, 100000)      #  FOR INSERTING A NUMBER AT A PARTICULAR INDEX.
print(lst)

m = [1000, 2000, 300]
lst.extend(m)                              #  FOR EXTENDING THE LIST.
print(lst)

a = [12, 13, 14]
b = [15, 16, 17]

c = a + b                                 #  FOR CONCATENATING TWO STRINGS.
print(c)