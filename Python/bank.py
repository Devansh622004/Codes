x = input("Greeting: ")


if "hello".upper() in x:
    print("$0")

elif "hello".lower() in x:
    print("$0")

elif "hello" in x:
    print("$0")

elif "Hello" in x:
    print("$0")

elif 'h' == x[0] or "H" == x[0] and x != "hello" and x.lower() != "hello" and x.upper() != "hello":
    print("$20")

else:
    print("$100")