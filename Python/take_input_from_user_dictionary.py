users = {}

n = int(input("enter no. of users: "))

for i in range(n):
    user_id = input("Enter User ID: ")
    user_name = input("Enter User Name: ")
    user_age = input("Enter User Age: ")
    users[user_id] = {"Name": user_name, "Age": user_age}

search_id = input("Enter User ID to fetch details: ")

if search_id in users:
    print("User Details:", users[search_id])
else:
    print("User not found!")
