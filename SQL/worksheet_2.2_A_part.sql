CREATE TABLE Student (
    ID INT PRIMARY KEY,
    Name VARCHAR(10)
);

CREATE TABLE Friends (
    ID INT PRIMARY KEY,
    Friend_ID INT,
    FOREIGN KEY (ID) REFERENCES Student(ID),
    FOREIGN KEY (Friend_ID) REFERENCES Student(ID)
);

CREATE TABLE Package (
    ID INT PRIMARY KEY,
    Salary FLOAT,
    FOREIGN KEY (ID) REFERENCES Student(ID)
);

INSERT INTO Student VALUES
 (1,'devi'),
 (2,'van'),
 (3,'har'),
 (4,'raj');  

INSERT INTO Friends VALUES
 (1,2),
 (2,3),
 (3,4);

INSERT INTO Package VALUES
 (1,124.5),
 (2,34.6),
 (3,124.7),
 (4,145.0);

SELECT s.name
FROM Student s
JOIN Friends f ON s.ID = f.ID
JOIN Package p1 ON s.ID = p1.ID
JOIN Package p2 ON f.Friend_ID = p2.ID
WHERE p2.Salary > p1.Salary
ORDER BY p2.Salary;
