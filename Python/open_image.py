# For your Image Filter App, we’ll use Pillow (the PIL library).

# For Basic Image Handling:-
# Image.open() → open an image
# img.show() → display image
# img.save("new.jpg") → save image
from PIL import Image

# For Filters:-
# img.filter(ImageFilter.BLUR) → blur filter
# img.filter(ImageFilter.SHARPEN) → sharpen filter
from PIL import ImageFilter

# Enhancements (brightness, contrast, etc.)
# ImageEnhance.Brightness(img).enhance(1.5) → make brighter
# ImageEnhance.Contrast(img).enhance(0.8) → reduce contrast
from PIL import ImageEnhance

image = Image.open("TEHRI_ME.jpg")
image.show()

# Filter an image
# image_blur = image.filter(ImageFilter.BLUR)
# image_blur.show()

# Image Enhancer
image_contrast = ImageEnhance.Contrast(image).enhance(3)
image_contrast.show()

# Saving the new images
# image_blur.save("image_blur.jpg")
image_contrast.save("image_contrast.jpg")