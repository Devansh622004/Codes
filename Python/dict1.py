company = [
    {"Name": "Dev", "Dept": "AI & ML", "Salary": "1.5Lpa"},
    {"Name": "Nature", "Dept": "MBA", "Salary": "80Kpa"},
    {"Name": "Krishna", "Dept": "Full Stack", "Salary": None}
]

for employee in company:
    print(employee["Name"], employee["Salary"], sep = ", ")