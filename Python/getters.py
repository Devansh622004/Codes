# 🔑 What is a Getter?
# A getter is a method that lets you access a private variable in a safe and controlled way.
# 🤔 Why do we use Getters?
# In Python, you often make variables private using a single underscore (_) or double underscore (__), meaning:
# "Don't touch this directly!"
#
# But sometimes, you still want to read that value. That’s where getters help.

class Person:
    def __init__(self, name):
        self._name = name  # _name means: "treat this as private"

p = Person("Alice")
print(p._name)  # You can access it, but it's not recommended!

# This works, but it breaks encapsulation.

# 🐍 Pythonic Way: Using @property
# In Python, we use the @property decorator to make getters look like attributes, not method calls.

class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):  # Still a method, but used like a variable
        return self._name

p = Person("Alice")
print(p.name)  # Looks like accessing a variable, but it's actually a method!



