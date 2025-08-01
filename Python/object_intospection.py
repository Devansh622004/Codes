# OBJECT INTROSPECTION :-
# "Object introspection in Python means examining the type or properties
# of an object at runtime—basically, asking Python about what an object is or what it can do while
# the program is running."

# It’s like Python giving you tools to “look inside” objects.

class employee:

    def __init__(self, name, salary, bond):
        self.name = name
        self.salary = salary
        self.bond = bond

    def get_salary(self):
        return self.salary

    def get_info(self):
        print(f"The name of the employee is {self.name}. Salary is {self.salary}. The bond is for {self.bond} years.")

o1 = employee("Meher", 100000, 5)

# OBJECT INTROSPECTION

print(dir(o1))

