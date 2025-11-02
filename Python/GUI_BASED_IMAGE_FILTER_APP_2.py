# Import required libraries
from PIL import Image, ImageFilter, ImageEnhance, ImageTk
from tkinter import Tk, filedialog, Button, Label, messagebox, Frame

# Global variables
img = None
tk_img = None
result = None

def open_image():
    global img, tk_img
    filename = filedialog.askopenfilename(
        filetypes=[("Image Files", "*.jpg; *.png; *.jpeg; *.bmp")]
    )
    if filename:
        img = Image.open(filename)

        max_width = 650   # reduced so buttons never hide
        max_height = 500
        img.thumbnail((max_width, max_height))

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

def apply_blur():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.BLUR)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def apply_sharp():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.SHARPEN)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def apply_edge():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.FIND_EDGES)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def apply_emboss():
    global img, tk_img, result
    if img:
        result = img.filter(ImageFilter.EMBOSS)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def apply_brightness():
    global img, tk_img, result
    if img:
        result = ImageEnhance.Brightness(img).enhance(2)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def apply_contrast():
    global img, tk_img, result
    if img:
        result = ImageEnhance.Contrast(img).enhance(2)
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)

def save_image():
    global result
    if result:
        save_path = filedialog.asksaveasfilename(defaultextension=".jpg")
        if save_path:
            result.save(save_path)
            messagebox.showinfo("Saved ✅", f"Saved: {save_path}")
    else:
        messagebox.showwarning("No Image", "Apply a filter first!")

# Window UI
window = Tk()
window.title("GUI Based Image Filter Application")
window.geometry("900x650")

# ✅ Cool gradient background
window.config(bg="#2a003f")

# ✅ Gradient-like design using repeated color frame (simple & safe)
grad_frame = Frame(window, bg="#3c0060")
grad_frame.pack(fill="both", expand=True)

# Image Label
label = Label(grad_frame, bg="#3c0060")
label.place(x=20, y=20)

# Button Panel — FIXED on RIGHT always visible ✅
btn_frame = Frame(grad_frame, bg="#2a003f")
btn_frame.place(relx=0.85, rely=0.5, anchor="center")

# Button Style
BTN_WIDTH = 18
BTN_COLOR = "#8b33d6"
BTN_FG = "white"

def make_button(text, cmd):
    return Button(btn_frame, text=text, command=cmd,
                  width=BTN_WIDTH, height=1,
                  bg=BTN_COLOR, fg=BTN_FG,
                  font=("Arial", 10, "bold"))

# Buttons
make_button("Open Image", open_image).pack(pady=4)
make_button("Grayscale", apply_grayscale).pack(pady=4)
make_button("Blur", apply_blur).pack(pady=4)
make_button("Sharpen", apply_sharp).pack(pady=4)
make_button("Edge Detection", apply_edge).pack(pady=4)
make_button("Emboss Effect", apply_emboss).pack(pady=4)
make_button("Brightness ++", apply_brightness).pack(pady=4)
make_button("Contrast ++", apply_contrast).pack(pady=4)
make_button("Save Image ✅", save_image).pack(pady=8)

window.mainloop()
