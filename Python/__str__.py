# In Python, the __str__() method is a special method (also called a dunder method, short for
# "double underscore") that is used to define the string representation of an object.
#
# ✅ Purpose:
# When you call str(obj) or use print(obj), Python internally calls obj.__str__() to get
# a readable string version of the object.

class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def __str__(self):        # (D)OUBLE + (UNDER)SCORE = DUNDER METHOD
        return f"{self.name} is {self.age} years old"

o1 = Person("MEHER", 70)
print(o1)

# ✅ Use Cases:
# 1) To make your class output human-readable.
# 2) Helpful during debugging or logging.