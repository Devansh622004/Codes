# Implement a Student class with information such as rollno, name, class. The information must be entered by the user.

class student:
    def __init__(self):
        self.rollno = None
        self.name = None
        self.standard = None

    def get(self):
        self.rollno = int(input("Enter Roll No.: "))
        self.name = input("Enter Name: ")
        self.standard = input("Enter Class: ")

    def put(self):
        print("Roll NO. = ", self.rollno)
        print("Name = ", self.name)
        print("Class = ", self.standard)

s1 = student()
s1.get()
s1.put()
