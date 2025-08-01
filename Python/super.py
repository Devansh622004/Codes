# In Python, super() is a built-in function used to call methods from a parent (or superclass).
# It’s most commonly used in class inheritance, especially inside the __init__() method, to ensure
# the parent class is initialized properly.

# ✅ Why use super()?
# To avoid repeating code from the parent class
# To ensure cooperative multiple inheritance (especially in complex class hierarchies)
# To follow good object-oriented programming practices

class animal:
    location = "Australia"

    def __init__(self, name):
        self.name = name
    def speak(self):
        print("GENERIC ANIMAL SOUND.")

class dog(animal):        # THIS IS HOW INHERITENCE IS DONE IN PYTHON.
    def speak(self):
        super().speak()   # "super()" IS CREATED.
        print("BARK")

o1 = animal("DRACO")
print(o1.name)
print(o1.location)
o1.speak()                # "super()" IS ALSO IN ACTION.

print("-------------------------------------------------------------------------------")

o2 = dog("BRUNO")
print(o2.name)
print(o2.location)
o2.speak()