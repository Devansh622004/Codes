name = input("ENTER YOUR NAME: ")

file = open("name_append.txt", "a")
file.write(name + "\n")
file.close()