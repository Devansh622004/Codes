class animal:
    location = "Australia"

    def __init__(self, name):
        self.name = name
    def speak(self):
        print("GENERIC ANIMAL SOUND.")

class dog(animal):        # THIS IS HOW INHERITENCE IS DONE IN PYTHON.
    def speak(self):
        print("BARK")

o1 = animal("DRACO")
print(o1.name)
print(o1.location)
o1.speak()

print("-------------------------------------------------------------------------------")

o2 = dog("BRUNO")
print(o2.name)
print(o2.location)
o2.speak()
