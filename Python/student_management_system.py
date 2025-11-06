import tkinter as tk
from tkinter import ttk, messagebox
import sqlite3

# --------------- DATABASE CONNECTION -----------------
conn = sqlite3.connect('students.db')
cursor = conn.cursor()
cursor.execute("""
CREATE TABLE IF NOT EXISTS students(
    roll INTEGER PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER,
    course TEXT
)
""")
conn.commit()

# --------------- FUNCTIONS -----------------

def add_student():
    roll = entry_roll.get()
    name = entry_name.get()
    age = entry_age.get()
    course = entry_course.get()

    if roll == "" or name == "":
        messagebox.showerror("Error", "Roll No and Name required!")
        return

    try:
        cursor.execute("INSERT INTO students VALUES (?, ?, ?, ?)",
                       (roll, name, age, course))
        conn.commit()
        messagebox.showinfo("Success", "Student Added Successfully!")
        show_students()
        clear_fields()
    except:
        messagebox.showerror("Error", "Roll No already exists!")

def show_students():
    cursor.execute("SELECT * FROM students")
    rows = cursor.fetchall()
    student_table.delete(*student_table.get_children())
    for row in rows:
        student_table.insert("", tk.END, values=row)

def get_data(event):
    selected = student_table.focus()
    data = student_table.item(selected)['values']
    if data:
        entry_roll.delete(0, tk.END)
        entry_roll.insert(0, data[0])
        entry_name.delete(0, tk.END)
        entry_name.insert(0, data[1])
        entry_age.delete(0, tk.END)
        entry_age.insert(0, data[2])
        entry_course.delete(0, tk.END)
        entry_course.insert(0, data[3])

def update_student():
    roll = entry_roll.get()
    name = entry_name.get()
    age = entry_age.get()
    course = entry_course.get()

    if roll == "":
        messagebox.showerror("Error", "Select a record to update!")
        return

    cursor.execute("""
    UPDATE students SET 
    name=?, age=?, course=?
    WHERE roll=?
    """, (name, age, course, roll))
    conn.commit()
    messagebox.showinfo("Success", "Record Updated Successfully!")
    show_students()
    clear_fields()

def delete_student():
    roll = entry_roll.get()
    if roll == "":
        messagebox.showerror("Error", "Select a record to delete!")
        return
    cursor.execute("DELETE FROM students WHERE roll=?", (roll,))
    conn.commit()
    messagebox.showinfo("Deleted", "Record deleted successfully!")
    show_students()
    clear_fields()

def clear_fields():
    entry_roll.delete(0, tk.END)
    entry_name.delete(0, tk.END)
    entry_age.delete(0, tk.END)
    entry_course.delete(0, tk.END)

# --------------- GUI DESIGN -----------------

root = tk.Tk()
root.title("Student Management System")
root.geometry("650x450")
root.resizable(False, False)

# Heading
tk.Label(root, text="Student Management System",
         font=("Arial", 20, "bold"), fg="blue").pack(pady=10)

frame = tk.Frame(root)
frame.pack(pady=10)

# Input Fields
tk.Label(frame, text="Roll No:", font=("Arial", 12)).grid(row=0, column=0, padx=10, pady=5)
entry_roll = tk.Entry(frame)
entry_roll.grid(row=0, column=1)

tk.Label(frame, text="Name:", font=("Arial", 12)).grid(row=1, column=0, padx=10, pady=5)
entry_name = tk.Entry(frame)
entry_name.grid(row=1, column=1)

tk.Label(frame, text="Age:", font=("Arial", 12)).grid(row=2, column=0, padx=10, pady=5)
entry_age = tk.Entry(frame)
entry_age.grid(row=2, column=1)

tk.Label(frame, text="Course:", font=("Arial", 12)).grid(row=3, column=0, padx=10, pady=5)
entry_course = tk.Entry(frame)
entry_course.grid(row=3, column=1)

# Buttons
tk.Button(frame, text="Add", width=10, command=add_student).grid(row=0, column=3, padx=10)
tk.Button(frame, text="Update", width=10, command=update_student).grid(row=1, column=3, padx=10)
tk.Button(frame, text="Delete", width=10, command=delete_student).grid(row=2, column=3, padx=10)
tk.Button(frame, text="Clear", width=10, command=clear_fields).grid(row=3, column=3, padx=10)

# Table Frame
table_frame = tk.Frame(root)
table_frame.pack()

student_table = ttk.Treeview(table_frame, columns=("roll", "name", "age", "course"), show="headings")
student_table.heading("roll", text="Roll No")
student_table.heading("name", text="Name")
student_table.heading("age", text="Age")
student_table.heading("course", text="Course")

student_table.pack(pady=10)
student_table.bind("<ButtonRelease-1>", get_data)

show_students()

root.mainloop()
