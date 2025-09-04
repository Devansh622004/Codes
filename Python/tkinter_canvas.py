import tkinter as tk

root = tk.Tk()
root.title("Canvas Demo")

# Create a canvas
canvas = tk.Canvas(root, width=400, height=300, bg="lightgray")
canvas.pack()

# Draw a rectangle on canvas (just for demo)
canvas.create_rectangle(50, 50, 200, 150, fill="purple")

root.mainloop()
