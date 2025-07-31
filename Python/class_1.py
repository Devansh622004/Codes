# 🧠 Why do we need classes in Python?
# Classes in Python are used to create objects that group data (attributes) and functions (methods)
# together in a logical way. This is the core of Object-Oriented Programming (OOP).

# 💡 Think of it like this:
# If you're making a game, you might have:
# 🔵 Player (name, health, attack())
# 🟢 Enemy (type, health, move())
# You could manage all of this using dictionaries and functions, but as your program grows, it becomes messy and hard to manage. Classes keep it clean and organized.

class person:
    name = "MEHER"
    occupation = "SPREADING LOVE"
    networth = 7
    def info(self):             # "self" is a way to reference the object of the class which is being created.
        print(f"{self.name} is {self.occupation}")

a = person()  # AN OBJECT OF CLASS "person" IS CRREATED.
a.name = "DEVANSH"
a.occupation = "MACHINE LEARNING engineer"
a.info()