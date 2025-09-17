class Car:
    def __init__(self, name, model):
        self.__name = name   # private variable
        self.model = model

    @property
    def name(self):      # Getter
        return self.__name

    @name.setter
    def name(self, value):   # Setter
        if len(value) <= 2:
            print("WRITE A STRING HAVING LENGTH GREATER THAN 2.")
        else:
            self.__name = value
            print("WELL DONE! Name updated.")

# Create object
car1 = Car("Indigo", "ecs lx")

print(car1.name)   # Getter → Indigo

car1.name = "i"    # Setter → invalid
print(car1.name)   # still Indigo

car1.name = "BMW"  # Setter → valid
print(car1.name)   # BMW
