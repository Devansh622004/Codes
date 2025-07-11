from linecache import clearcache

import requests

response = requests.get("https://cs50.harvard.edu/python/weeks/4/")
print(response.text)