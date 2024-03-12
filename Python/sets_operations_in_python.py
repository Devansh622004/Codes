s1 = {1, 2, 3}
s2 = {4, 3, 5, 6}


#  UNION OF SETS
print(s1.union(s2))
print(s1, s2)


#  IF WE WANT TO UPDATE THE ELEMENTS IN ONE SET
s1.update(s2)
print(s1, s2)


s1 = {1, 2, 3}
s2 = {4, 3, 5, 6}


#  INTERSECTION OF SETS
print(s1.intersection(s2))
print(s1, s2)

s1.intersection_update(s2)
print(s1, s2)


s1 = {1, 2, 3}
s2 = {4, 3, 5, 6}


#  SYMMETRIC-DIFFERENCE OF SETS
set_dif = s1.symmetric_difference(s2)
print(set_dif)


#  IF WE WANT TO REMOVE AN ELEMENT FROM A SET
s1 = {1, 2, 3}
s2 = {4, 3, 5, 6}

s1.remove(3)
print(s1)