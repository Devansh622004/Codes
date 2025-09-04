# Console version 🖥️                        | GUI version 🖼️
# ----------------------------------------- | ---------------------------------------
# `input()` → user types filename           | Use **file dialog** to browse image
# `print()` menu → text options             | Use **buttons** or a **dropdown menu**
# `input()` for filter choice               | User clicks button / dropdown selection
# `print()` + `exit()` messages             | Show in GUI (Label or Messagebox)
# `result.show()` → opens in default viewer | Show image **inside window**
# `save_name` printed                       | Maybe show a popup: "Image saved ✅"

# Import required libraries
from PIL import Image, ImageFilter, ImageEnhance, ImageTk
from tkinter import Tk, filedialog, Button, Label, messagebox

# Global variables
img = None       # Original image
tk_img = None    # Image for Tkinter display
result = None    # Last filtered image

# Function to open image
def open_image():
    global img, tk_img
    filename = filedialog.askopenfilename(
        filetypes=[("Image Files", "*.jpg; *.png; *.jpeg; *.bmp")]
    )
    if filename:
        img = Image.open(filename)

        # Resize to fit window (optional: keep aspect ratio)
        max_width = 800
        max_height = 400
        img.thumbnail((max_width, max_height))  # this keeps aspect ratio

        tk_img = ImageTk.PhotoImage(img)
        label.config(image=tk_img)
        label.image = tk_img

# Filter functions
def apply_grayscale():
    global img, tk_img, result
    if img:
        result = img.convert("L")
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_blur():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.BLUR)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_sharp():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.SHARPEN)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_edge():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.FIND_EDGES)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_emboss():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.EMBOSS)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_brightness():
    global img, tk_img, result
    if img:
        result = ImageEnhance.Brightness(img).enhance(2)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

def apply_contrast():
    global img, tk_img, result
    if img:
        result = ImageEnhance.Contrast(img).enhance(2)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img

# Function to save image
def save_image():
    global result
    if result:
        save_path = filedialog.asksaveasfilename(defaultextension=".jpg")
        if save_path:
            result.save(save_path)
            messagebox.showinfo("Saved", f"Image saved as {save_path}")
    else:
        messagebox.showwarning("No Image", "Apply a filter first!")

# Window setup
window = Tk()
window.title("GUI Based Image Filter Application")
window.geometry("800x600")

# Label to show image
label = Label(window)
label.pack()

# Buttons
btn_open = Button(window, text="Open Image", command=open_image)
btn_open.pack()

btn1 = Button(window, text="Grayscale", command=apply_grayscale)
btn1.pack()

btn2 = Button(window, text="Blur", command=apply_blur)
btn2.pack()

btn3 = Button(window, text="Sharpen", command=apply_sharp)
btn3.pack()

btn4 = Button(window, text="Edge Detection", command=apply_edge)
btn4.pack()

btn5 = Button(window, text="Emboss Effect", command=apply_emboss)
btn5.pack()

btn6 = Button(window, text="Brightness Increase", command=apply_brightness)
btn6.pack()

btn7 = Button(window, text="Contrast Increase", command=apply_contrast)
btn7.pack()

btn_save = Button(window, text="Save Image", command=save_image)
btn_save.pack()

# Run the GUI
window.mainloop()
