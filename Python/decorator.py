class car:
    def __init__(self, name, model):
        self.__name = name
        self.model = model

    @property
    def name(self):    # Python has a special decorator "@property" that makes getter usage more natural.
        return self.__name

car1 = car("Indigo", "ecs lx")
# print(car1.name)    # Not Valid
print(car1.model)

print(car1.name())    # This way, you access private attributes like normal attributes, but internally they are protected.