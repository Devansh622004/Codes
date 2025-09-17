class student:    # Base Class / Parent Class
    def __init__(self, rollno, name, age):    # Constructor
        self.rollno = rollno
        self.name = name
        self.age = age

    def all_info(self):
        return f"{self.rollno} {self.name} {self.age}"

class Marks(student):    # Inherited Class / Derived Class
    def __init__(self, rollno, name, age, marks_get):
        super().__init__(rollno, name, age)
        self.marks_get = marks_get

s1 = student(1, "Meher", 7)
# print("Name: ", s1.name)
# print("Rollno: ", s1.rollno)
# print("Age", s1.age)

info = s1.all_info()
print(info)
print(type(info))

s2 = Marks(2, "Hanuman", 100, 95)
print("Rollno: ", s2.rollno)
print("Name: ", s2.name)
print("Age: ", s2.age)
print("Marks: ", s2.marks_get)