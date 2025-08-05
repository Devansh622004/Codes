# 🧠 What is a Decorator?
# A decorator is just a way to add extra functionality to a function without changing its code.

# Think of it like putting a gift in a box and wrapping it — the gift (function) is the same, but
# now it looks nicer (extra feature added).

# ✅ Decorator in Action
def log_decorator(func):
    def wrapper():
        print("Function is about to run")
        func()
        print("Function has finished running")
    return wrapper

# Now we decorate say_hello like this:
@log_decorator
def say_hello():
    print("Hello!")

say_hello()

# 🎉 You didn’t change the code inside say_hello, but you added behavior before and after it runs.

# This:
# @log_decorator
# def say_hello():
#     print("Hello!")

# Is exactly the same as:
# def say_hello():
#     print("Hello!")
#
# say_hello = log_decorator(say_hello)
