# What is a Getter?
# A getter is a method that lets you access (get) the value of a private attribute of a class.
# In Python, class attributes are often made private (by prefixing them with __) to restrict direct access.
# Instead of accessing them directly, we use getters.

class car:
    def __init__(self, name, model):
        self.__name = name
        self.model = model

    def get_name(self):    # Getter --> it's a good practise to write a getter name like:- "get_name() [STARTING WITH "get_"]
        return self.__name

car1 = car("Indigo", "ecs lx")
# print(car1.name)    # Not Valid
print(car1.model)

print(car1.get_name())