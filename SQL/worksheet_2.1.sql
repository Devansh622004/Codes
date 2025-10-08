-- 1) Create Tables
CREATE TABLE Company (
    company_code VARCHAR(10) PRIMARY KEY,
    founder VARCHAR(50)
);

CREATE TABLE Lead_Manager (
    lead_manager_code VARCHAR(10),
    company_code VARCHAR(10)
);STUDENT.sql


CREATE TABLE Senior_Manager (
    senior_manager_code VARCHAR(10),
    lead_manager_code VARCHAR(10),
    company_code VARCHAR(10)
);

CREATE TABLE Manager (
    manager_code VARCHAR(10),
    senior_manager_code VARCHAR(10),
    lead_manager_code VARCHAR(10),
    company_code VARCHAR(10)
);

CREATE TABLE Employee (
    employee_code VARCHAR(10),
    manager_code VARCHAR(10),
    senior_manager_code VARCHAR(10),
    lead_manager_code VARCHAR(10),
    company_code VARCHAR(10)
);

-- 2) Insert Sample Data
INSERT INTO Company VALUES
('C_1', 'Amber'),
('C_2', 'David'),
('C_10', 'John');

-- Lead Managers
INSERT INTO Lead_Manager VALUES
('L1', 'C_1'),
('L2', 'C_1'),
('L3', 'C_2'),
('L4', 'C_10');

-- Senior Managers
INSERT INTO Senior_Manager VALUES
('S1', 'L1', 'C_1'),
('S2', 'L2', 'C_1'),
('S3', 'L3', 'C_2'),
('S4', 'L4', 'C_10'),
('S5', 'L4', 'C_10');

-- Managers
INSERT INTO Manager VALUES
('M1', 'S1', 'L1', 'C_1'),
('M2', 'S2', 'L2', 'C_1'),
('M3', 'S3', 'L3', 'C_2'),
('M4', 'S4', 'L4', 'C_10'),
('M5', 'S5', 'L4', 'C_10');

-- Employees
INSERT INTO Employee VALUES
('E1', 'M1', 'S1', 'L1', 'C_1'),
('E2', 'M1', 'S1', 'L1', 'C_1'),
('E3', 'M2', 'S2', 'L2', 'C_1'),
('E4', 'M3', 'S3', 'L3', 'C_2'),
('E5', 'M4', 'S4', 'L4', 'C_10'),
('E6', 'M5', 'S5', 'L4', 'C_10'),
('E7', 'M5', 'S5', 'L4', 'C_10');

-- 3) Final Query
SELECT 
    c.company_code,
    c.founder,
    COUNT(DISTINCT l.lead_manager_code)   AS total_lead_managers,
    COUNT(DISTINCT s.senior_manager_code) AS total_senior_managers,
    COUNT(DISTINCT m.manager_code)        AS total_managers,
    COUNT(DISTINCT e.employee_code)       AS total_employees
FROM Company c
LEFT JOIN Lead_Manager   l ON c.company_code = l.company_code
LEFT JOIN Senior_Manager s ON c.company_code = s.company_code
LEFT JOIN Manager        m ON c.company_code = m.company_code
LEFT JOIN Employee       e ON c.company_code = e.company_code
GROUP BY c.company_code, c.founder
ORDER BY c.company_code;