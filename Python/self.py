# 📌 What is self in Python?
# In Python, self is a reference to the current object (the instance of the class).
# It is used inside class methods to access attributes and methods of the current object.

# 🔧 Why do we need self?
# Imagine you're writing instructions for a robot. Each robot has a name and a job. You need a way to say:
# "Hey robot, your name is X and your job is Y."
# That’s what self does — it allows each object to keep track of its own data.

class Robot:
    def __init__(self, name, job):
        self.name = name      # assigning the 'name' to this specific robot
        self.job = job        # assigning the 'job' to this specific robot

    def introduce(self):
        print(f"My name is {self.name} and I am a {self.job}")

r1 = Robot("Robo1", "Cleaner")
r2 = Robot("Robo2", "Chef")

r1.introduce()   # Output: My name is Robo1 and I am a Cleaner
r2.introduce()   # Output: My name is Robo2 and I am a Chef

# 🔍 What's happening under the hood?
# r1.introduce() is like saying: Robot.introduce(r1)
# Inside the method, self is replaced by r1, so self.name becomes r1.name → "Robo1"
# So self is just a variable that always refers to the current object.

# 🔴 Common Misconceptions:
# self is not a keyword (you can technically name it anything, but self is the standard).
#
# You don’t pass self manually when calling a method — Python does it for you.
#
# 🧠 Think of it like this:
# self is to objects what I or me is to people.