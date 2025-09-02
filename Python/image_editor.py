# 🔹 Image Formats Pillow Supports
# Some of the most common ones:
# JPEG / JPG → .jpg, .jpeg
# PNG → .png (supports transparency)
# GIF → .gif (animated GIFs too, but trickier)
# BMP → .bmp
# TIFF → .tif, .tiff
# ICO → .ico (icons)
# WEBP → .webp (used on modern websites)

from PIL import Image, ImageFilter, ImageEnhance  # Importing Required Libraries

# 1. Asking user for image
filename = input("Enter image filename (with extension): ")
image = Image.open(filename)     # For Opening Image

# 2. Show Various filter options
menu = ["Grayscale", "Blur", "Sharpen", "Edge Detection", "Emboss Effect", "Brightness Increase", "Contrast Increase"] # Creating List
print("Menu: ")
i = 1
for item in menu:
    print(i, ".", item)
    i += 1

while True:
    choice = input("\nEnter filter name (grayscale/blur/sharpen/edges/emboss/bright/contrast): ").lower()  # Select Any One

    # 3. Apply Selected filter
    if choice == "grayscale":
        result = image.convert("L")
    elif choice == "blur":
        result = image.filter(ImageFilter.BLUR)
    elif choice == "sharpen":
        result = image.filter(ImageFilter.SHARPEN)
    elif choice == "edges":
        result = image.filter(ImageFilter.FIND_EDGES)
    elif choice == "emboss":
        result = image.filter(ImageFilter.EMBOSS)
    elif choice == "bright":
        result = ImageEnhance.Brightness(image).enhance(1.5)
    elif choice == "contrast":
        result = ImageEnhance.Contrast(image).enhance(1.5)
    else:
        print("❌ Invalid choice. Try again.")
        exit()

    # 4. Showing The Edited/Updated Image
    result.show()

    # 5. Saving The Updated Image
    save_name = "output_" + choice + ".jpg"
    result.save(save_name)
    print(f"✅ Image saved as {save_name}")
