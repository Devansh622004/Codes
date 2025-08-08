CREATE TABLE users (
  id INTEGER PRIMARY KEY,
  name TEXT,
  age INTEGER
);

INSERT INTO users (name, age) 
VALUES 
('Alice', 25);

SELECT * FROM users;
