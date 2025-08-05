# 🔧 What is a Setter?
# A setter is a method that sets/updates the value of a private variable safely — with control and validation if needed.
#
# Think of it like updating your name on an ID card — you don’t directly overwrite the card, you go through a proper request form (the setter).

class Person:
    def __init__(self, name):
        self._name = name

p = Person("Alice")
p._name = "Bob"  # Not recommended! Direct access
print(p._name)

# You're modifying a private variable directly — risky and unclean.

class Person:
    def __init__(self, name):
        self._name = name

    @property
    def name(self):  # Getter
        return self._name

    @name.setter
    def name(self, new_name):  # Setter
        if len(new_name) >= 2:
            self._name = new_name
        else:
            raise ValueError("Name is too short!")



