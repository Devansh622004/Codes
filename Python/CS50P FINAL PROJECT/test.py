# test_project.py
from PIL import Image
from GUI_BASED_IMAGE_FILTER_APP import (
    apply_grayscale, apply_blur, apply_sharpen,
    apply_edge, apply_emboss, apply_brightness, apply_contrast
)

def create_test_image():
    """Helper: Create a simple red image for testing."""
    return Image.new("RGB", (10, 10), color="red")


def test_apply_grayscale():
    img = create_test_image()
    gray = apply_grayscale(img)
    assert gray.mode == "L"


def test_apply_blur():
    img = create_test_image()
    blurred = apply_blur(img)
    assert blurred is not None
    assert blurred.size == (10, 10)


def test_apply_sharpen():
    img = create_test_image()
    sharp = apply_sharpen(img)
    assert sharp is not None
    assert sharp.size == (10, 10)


def test_apply_edge():
    img = create_test_image()
    edged = apply_edge(img)
    assert edged is not None
    assert edged.size == (10, 10)


def test_apply_emboss():
    img = create_test_image()
    embossed = apply_emboss(img)
    assert embossed is not None
    assert embossed.size == (10, 10)


def test_apply_brightness():
    img = create_test_image()
    bright = apply_brightness(img, factor=2)
    assert bright is not None
    assert bright.size == (10, 10)


def test_apply_contrast():
    img = create_test_image()
    contrast = apply_contrast(img, factor=2)
    assert contrast is not None
    assert contrast.size == (10, 10)
