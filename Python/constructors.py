class employee:
    company = "Netflix"

    def __init__(self, name, salary, bond, company):
        self.name = name
        self.salary = salary
        self.bond = bond

    def get_salary(self):
        return self.salary

    def get_info(self):
        print(f"The name of the employee is {self.name}. Salary is {self.salary}. The bond is for {self.bond} years.")

o1 = employee("Meher", 100000, 5, "Tesla")
print(o1.company) # WILL ALWAYS PRINT INSTANCE ATTRIBUTE WHENEVER PRESENT.
print(employee.company) # THIS WILL ALWAYS PRINT THE CLASS ATTRIBUTE.
print("Name: ", o1.name)
print("Salary: ", o1.salary)
print("Bond: ", o1.bond)
o1.get_info()