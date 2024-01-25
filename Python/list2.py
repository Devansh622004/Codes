companies = ["boat", "realme", "milton", "oneplus"]

# ********************** CASE 1st *************************
for company in companies:
    print(company)

# IN PYTHON, WHILE USING LIST THE VARIABLE IS AUTOMATICALLY INCREMENTED.

# ********************** CASE 2st *************************
print("\n")
for company in companies:
    print(companies)

# ********************** CASE 3rd *************************
print("\n")
for company in range(len(companies)):
    print(companies[company])

#                       OR
print("\n")
for company in range(len(companies)):
    print(company, companies[company])