# Dictionary program to store and fetch user details

# Create dictionary
users = {}

# Taking input for multiple users
n = int(input("Enter number of users: "))
for i in range(n):
    user_id = input("Enter User ID: ")
    user_name = input("Enter User Name: ")
    user_age = int(input("Enter User Age: "))
    users[user_id] = {"Name": user_name, "Age": user_age}

# Fetch details by ID
search_id = input("Enter User ID to fetch details: ")
if search_id in users:
    print("User Details:", users[search_id])
else:
    print("User not found!")
