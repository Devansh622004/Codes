# Beautiful Soup is a library that makes it easy to scrape information from web pages.
# It sits atop an HTML or XML parser, providing Pythonic idioms for iterating, searching, and
# modifying the parse tree.

# 🔍 What Is a Parser?
# A parser is a tool that reads and interprets code or text. In this case, it interprets HTML content
# so that you can extract or modify elements easily.

import requests
from bs4 import BeautifulSoup

URL = "https://www.codewithharry.com/blogpost/django-cheatsheet"
r = requests.get(URL)
# print(r.text)

soup = BeautifulSoup(r.text, 'html.parser')
# print(soup.prettify()) --> Print the HTML document in a nicely formatted (pretty) way.
print(soup.prettify())