class car:
    def __init__(self, name, model):
        self.__name = name
        self.model = model

    def get_name(self):    # Getter --> it's a good practise to write a getter name like:- "get_name() [STARTING WITH "get_"]
        return self.__name

    def set_name(self, name):
        if len(name) <= 2:
            print("WRITE A STRING HAVING LENGTH GREATER THAN 2.")
        else:
            print("WELL DONE!")

car1 = car("Indigo", "ecs lx")

print(car1.get_name())

car1.set_name("b2")
print(car1.get_name())

car1.set_name("meher")
print(car1.get_name())

