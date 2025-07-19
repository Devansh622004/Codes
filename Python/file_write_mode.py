name = input("ENTER YOUR NAME: ")

file = open("name_write.txt", "w")
file.write(name)
file.close()