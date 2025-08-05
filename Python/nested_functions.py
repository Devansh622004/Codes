def outer():
    print("I am the outer function.")

    def inner():
        print("I am the inner function.")

    inner()  # Call the inner function

outer()
