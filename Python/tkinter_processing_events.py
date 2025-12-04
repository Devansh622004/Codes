# ✅ 3. Basics of Creating a button
# ✔ Code Example
import tkinter as tk

root = tk.Tk()
root.title("Simple Window")
root.geometry("400x250")
root.config(bg="lightblue")
label = tk.Label(root, text="Hello Tkinter!")
label.pack()

# ✔ Button Click Event
def clicked():
    print("Button was clicked")

button = tk.Button(root, text="Click Me", command=clicked, bg="yellow", fg="black") # bg -> button color, fg -> text color
button.pack()

# ✔ Entry Widget (Input Box)
entry = tk.Entry(root, width=25)
entry.pack()

def show_text():
    print("User Entered:", entry.get())

btn = tk.Button(root, text="Show", command=show_text)
btn.pack()

# ✔ Text Widget
txt = tk.Text(root, height=5, width=40)
txt.pack()

# ✔ Listbox
lb = tk.Listbox(root)
lb.insert(1, "Apple")
lb.insert(2, "Banana")
lb.insert(3, "Orange")
lb.pack()

# Ckeckbox
# variable to store checkbox state (1 = checked, 0 = unchecked)
check_var = tk.IntVar()
check_var2 = tk.IntVar()

# Checkbox widget
check = tk.Checkbutton(root, text="I agree", variable=check_var)
check2 = tk.Checkbutton(root, text="I don't agree", variable=check_var2)
check.pack()
check2.pack()

# Start the Tkinter event loop
root.mainloop()