import tkinter as tk

root = tk.Tk()
root.title("Canvas Demo")

# Create a canvas
canvas = tk.Canvas(root, width=400, height=300, bg="lightgray")
canvas.pack()

# Draw a rectangle on canvas (just for demo)
canvas.create_rectangle(50, 50, 200, 150, fill="purple")

root.mainloop()

# 🖋️ Drawing on Canvas
# You can draw different shapes using built-in methods:
# | Shape             | Method                                      | Example                                                                |
# | ----------------- | ------------------------------------------- | ---------------------------------------------------------------------- |
# | **Line**          | `create_line(x1, y1, x2, y2, options)`      | `canvas.create_line(50, 50, 200, 50, fill="red", width=3)`             |
# | **Rectangle**     | `create_rectangle(x1, y1, x2, y2, options)` | `canvas.create_rectangle(70, 70, 200, 150, fill="yellow")`             |
# | **Oval / Circle** | `create_oval(x1, y1, x2, y2, options)`      | `canvas.create_oval(100, 100, 200, 200, fill="green")`                 |
# | **Polygon**       | `create_polygon(points, options)`           | `canvas.create_polygon(50,150, 150,50, 250,150, fill="orange")`        |
# | **Text**          | `create_text(x, y, text="...")`             | `canvas.create_text(200, 250, text="Hello Canvas", font=("Arial",16))` |
# | **Image**         | `create_image(x, y, image=...)`             | (See next section)                                                     |
