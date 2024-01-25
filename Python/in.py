x = input("File name: ")

if ".gif" in x:
    print("image/gif")

elif ".jpg" in x:
    print("image/jpeg")

elif ".jpeg" in x:
    print("image/jpeg")

elif ".gif" in x:
    print("image/gif")

elif ".pdf" in x:
    print("application/pdf")

else:
    print("application/octet-stream")

