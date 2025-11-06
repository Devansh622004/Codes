-- ✅ Project Title

-- “Student Course Management System using SQLite”

-- STUDENT COURSE MANAGEMENT SYSTEM

-- Create Tables
CREATE TABLE Students (
  student_id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL,
  age INTEGER,
  department TEXT
);

CREATE TABLE Courses (
  course_id INTEGER PRIMARY KEY AUTOINCREMENT,
  course_name TEXT NOT NULL,
  credits INTEGER
);

CREATE TABLE Enrollments (
  enroll_id INTEGER PRIMARY KEY AUTOINCREMENT,
  student_id INTEGER,
  course_id INTEGER,
  FOREIGN KEY(student_id) REFERENCES Students(student_id),
  FOREIGN KEY(course_id) REFERENCES Courses(course_id)
);

-- Insert some Students
INSERT INTO Students (name, age, department) VALUES
('Amit Kumar', 20, 'Computer Science'),
('Priya Sharma', 22, 'Mechanical'),
('Rahul Verma', 21, 'IT');

-- Insert some Courses
INSERT INTO Courses (course_name, credits) VALUES
('DBMS', 4),
('Data Structures', 3),
('Mathematics', 5);

-- Enroll Students in Courses
INSERT INTO Enrollments (student_id, course_id) VALUES
(1, 1),
(1, 3),
(2, 2);

-- View Data
SELECT * FROM Students;
SELECT * FROM Courses;
SELECT * FROM Enrollments;

-- JOIN: Show which student took which course
SELECT s.name, c.course_name
FROM Enrollments e
JOIN Students s ON e.student_id = s.student_id
JOIN Courses c ON e.course_id = c.course_id;

-- Update student details
UPDATE Students SET age = 23 WHERE name = 'Priya Sharma';

-- Delete an enrollment record
DELETE FROM Enrollments WHERE enroll_id = 2;
