# ✅ 3. Basics of Creating a Simple Window
# ✔ Code Example
import tkinter as tk

root = tk.Tk()
root.title("Simple Window")
root.geometry("400x250")
root.config(bg="lightblue")
label = tk.Label(root, text="Hello Tkinter!")
label.pack()

root.mainloop()