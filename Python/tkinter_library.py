# 🔹 Step 1: Making a Window
# Every Tkinter app starts with a window.
# It’s like opening an empty box where you’ll put buttons, text, images, etc.
import tkinter as tk

# Function to run when button is clicked
def say_hello():
    label.config(text="🎉 You clicked the button!")

root = tk.Tk()     # TO CREATE A WINDOW (It’s like opening an empty box where you’ll put buttons, text, images, etc.)
root.title("My App")    # TITLE ON TITLE BAR
root.geometry("400x300")    # SIZE OF THE WINDOW (width x height)

# 🔹 Step 2: Adding Text (Label)
# A Label is like writing something inside the window.
label = tk.Label(root, text="Hello, Tkinter!", font=("Arial", 18))
label.pack()    # <-- pack() is needed to show it inside the window

label.pack(pady=20) # pady adds space around

# 🔹 Step 3: Adding a Button (with Action)
# So far → we have a window + a text (Label).
# Now let’s add a Button.
# When you click it, the text will change automatically.
# Button
btn = tk.Button(root, text="Click Me!", font=("Arial", 14), command=say_hello)
btn.pack(pady=10)

# Keep window open
root.mainloop()