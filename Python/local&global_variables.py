# HOW TO CHANGE THE VALUE OF A GLOBAL VARIABLE.
x = 10
print(f"AT THE BEGINNING x = {x}")

def function():
    global x              # HERE global variable "x" is called.
    x = 7                 # HERE THE VALUE OF GLOBAL VARIABLE "x" IS CHANGED TO "7".
    y = 9
    print(f"y = {y}")

function()
print(f"x = {x}")
