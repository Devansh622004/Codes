-- RENAME TABLE'S PARTICULAR COLUMN.
-- describe table students;

-- ALTER TABLE students RENAME COLUMN admission_date TO adm_date;
-- describe students;

-- SELECT * FROM students;

-- INSERT INTO students (id, name, age, email, adm_date)
-- VALUES
--  (01, 'Ram', 20, 'ram@gmail.com', '1-1-25'),
--  (02, 'Shyam', 21, 'shyam@gmail.com', '2-1-25'),
--  (03, 'Radha', 22, 'radha@gmail.com', '3-1-25'),
--  (04, 'Suyash', 23, 'suyash@gmail.com', '4-1-25'),
--  (05, 'Vivek', 24, 'vivek@gmail.com', '5-1-25');

-- SELECT * FROM students; 

-- RENAME TABLE students TO STDS;

-- SELECT * FROM STDS;

-- ALTER TABLE STDS RENAME COLUMN adm_date TO admission_date;
-- SELECT * FROM STDS;


-- DESCRIBE STDS;

-- ALTER TABLE STDS 
-- ADD COLUMN stndrd BOOL default true;

-- DESCRIBE STDS;

-- ALTER TABLE STDS 
-- MODIFY COLUMN name VARCHAR(50) DEFAULT ("");

-- SELECT * FROM STDS;

-- DESCRIBE STDS;-- 

-- ALTER TABLE STDS
-- MODIFY COLUMN name VARCHAR(50) AFTER class;
-- SELECT * FROM STDS;

-- ALTER TABLE STDS
-- DROP COLUMN class;

-- DESCRIBE STDS;

-- SELECT * FROM STDS WHERE age > 22;

-- SELECT * FROM STDS WHERE age BETWEEN 21 AND 23;

-- SELECT * FROM STDS WHERE age IN ('21', '23');

-- SELECT * FROM STDS WHERE age NOT IN ('21', '23') 

-- SELECT * FROM STDS WHERE name LIKE 'r%'; 

-- SELECT * FROM STDS WHERE name NOT LIKE 'r%'; 

-- SELECT * FROM STDS WHERE age = 21; 

-- SELECT * FROM STDS ORDER BY age DESC LIMIT 3;

-- SELECT * FROM STDS ORDER BY age DESC LIMIT 3, 5;

UPDATE STDS
SET age = NULL 
WHERE age = 22;