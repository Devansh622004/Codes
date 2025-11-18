import sqlite3

conn = sqlite3.connect("test.db")
cur = conn.cursor()

a = int(input("Enter first no.: "))
b = int(input("Enter second no.: "))

cur.execute("SELECT ? + ? AS sum, ? - ? AS difference;", (a, b, a, b))

result = cur.fetchone()
print("Sum =", result[0])
print("Difference=", result[1])