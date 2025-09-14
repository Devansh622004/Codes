# project.py
from PIL import Image, ImageFilter, ImageEnhance, ImageTk
from tkinter import Tk, filedialog, Button, Label, messagebox

# Global variables
img = None       # Original image
tk_img = None    # Image for Tkinter display
result = None    # Last filtered image
label = None     # Label to show image


def open_image():
    """Open and display an image in the GUI."""
    global img, tk_img, label
    filename = filedialog.askopenfilename(
        filetypes=[("Image Files", "*.jpg; *.png; *.jpeg; *.bmp")]
    )
    if filename:
        img = Image.open(filename)

        # Resize to fit window
        max_width, max_height = 800, 400
        img.thumbnail((max_width, max_height))

        tk_img = ImageTk.PhotoImage(img)
        label.config(image=tk_img)
        label.image = tk_img
    return img


# ---- FILTER FUNCTIONS (ALL FROM YOUR ORIGINAL) ----
def apply_grayscale(image):
    """Convert image to grayscale."""
    if image:
        return image.convert("L")
    return None


def apply_blur(image):
    """Apply blur filter to image."""
    if image:
        return image.filter(ImageFilter.BLUR)
    return None


def apply_sharpen(image):
    """Sharpen the image."""
    if image:
        return image.filter(ImageFilter.SHARPEN)
    return None


def apply_edge(image):
    """Apply edge detection filter."""
    if image:
        return image.filter(ImageFilter.FIND_EDGES)
    return None


def apply_emboss(image):
    """Apply emboss filter."""
    if image:
        return image.filter(ImageFilter.EMBOSS)
    return None


def apply_brightness(image, factor=2):
    """Increase brightness of image."""
    if image:
        return ImageEnhance.Brightness(image).enhance(factor)
    return None


def apply_contrast(image, factor=2):
    """Increase contrast of image."""
    if image:
        return ImageEnhance.Contrast(image).enhance(factor)
    return None


def save_image():
    """Save the processed image."""
    global result
    if result:
        save_path = filedialog.asksaveasfilename(defaultextension=".jpg")
        if save_path:
            result.save(save_path)
            messagebox.showinfo("Saved", f"Image saved as {save_path}")
            return True
    else:
        messagebox.showwarning("No Image", "Apply a filter first!")
    return False


def update_display(new_image):
    """Update the GUI label with a new image."""
    global result, tk_img, label
    if new_image:
        result = new_image
        tk_img = ImageTk.PhotoImage(result)
        label.config(image=tk_img)
        label.image = tk_img


def main():
    """Main function to run the GUI application."""
    global label, img, tk_img, result

    window = Tk()
    window.title("GUI Based Image Filter Application")
    window.geometry("800x600")

    # Label to show image
    label = Label(window)
    label.pack()

    # Buttons
    Button(window, text="Open Image", command=open_image).pack()
    Button(window, text="Grayscale", command=lambda: update_display(apply_grayscale(img))).pack()
    Button(window, text="Blur", command=lambda: update_display(apply_blur(img))).pack()
    Button(window, text="Sharpen", command=lambda: update_display(apply_sharpen(img))).pack()
    Button(window, text="Edge Detection", command=lambda: update_display(apply_edge(img))).pack()
    Button(window, text="Emboss Effect", command=lambda: update_display(apply_emboss(img))).pack()
    Button(window, text="Brightness Increase", command=lambda: update_display(apply_brightness(img))).pack()
    Button(window, text="Contrast Increase", command=lambda: update_display(apply_contrast(img))).pack()
    Button(window, text="Save Image", command=save_image).pack()

    window.mainloop()


if __name__ == "__main__":
    main()
