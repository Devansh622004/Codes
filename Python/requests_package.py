# .
#
# 🔹 What is requests?
# The requests package is a tool in Python that helps you talk to websites or connect to web APIs.
#
# You can use it to:
#
# Get data from a website.
#
# Send data to a server.
#
# Work with APIs (like weather data, maps, or social media).
#
# 🔹 Why use requests?
# Normally, talking to websites using code is hard and requires a lot of setup. But requests makes it:
#
# Simple
#
# Clean
#
# Easy to read and write
#

# 1) 🔹 Example 1: Get data from a website
import requests

response = requests.get("https://fankit.supercell.com/d/YvtsWV4pUQVm/game-assets")  #requests.get(...) → asks the website to give you its content

print(response.text)  #response.text → shows the text (HTML) from the site


print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++")


# 2) 🔹 Example 2: Call an API (like a weather API)
response = requests.get("https://fankit.supercell.com/d/YvtsWV4pUQVm/game-assets")
data = response.json()               # .json() converts the response to a Python dictionary.
print(data)

print("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++")

# 3) 🔹 Example 3: Send data (POST request)
# python
# Copy
# Edit

data = {"name": "Alice", "email": "alice@example.com"}
response = requests.post("https://httpbin.org/post", data=data)
print(response.json())      # formats the text.
# requests.post(...) sends data to the server.


