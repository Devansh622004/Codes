class car:
    def __init__(self, name, model):
        self.__name = name
        self.model = model

car1 = car("Indigo", "ecs lx")
# print(car1.name)    # Not Valid
print(car1.model)

