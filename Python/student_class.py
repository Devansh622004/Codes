class Student:
    def __init__(self):
        self.rollno = None
        self.name = None
        self.student_class = None

    def input_data(self):
        self.rollno = int(input("Enter Roll Number: "))
        self.name = input("Enter Name: ")
        self.student_class = input("Enter Class: ")

    def display_data(self):
        print("\n--- Student Information ---")
        print(f"Roll Number: {self.rollno}")
        print(f"Name: {self.name}")
        print(f"Class: {self.student_class}")


# Main Program
student1 = Student()
student1.input_data()
student1.display_data()