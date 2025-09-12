CREATE TABLE EMP(
    Eno INT PRIMARY KEY,
    Ename CHAR(30),
    Title CHAR(30)
);

CREATE TABLE PROJ(
    PNO VARCHAR(10) PRIMARY KEY,
    Pname CHAR(30),
    LOC VARCHAR(30)
);

CREATE TABLE ASG(
    Eno INT,
    PNO VARCHAR(10),
    DUR VARCHAR(20),
    RESP CHAR(20),
    PRIMARY KEY (Eno, PNO),
    FOREIGN KEY (Eno) REFERENCES EMP(Eno),
    FOREIGN KEY (PNO) REFERENCES PROJ(PNO)
);

INSERT INTO EMP (Eno, EName, Title) VALUES
(1, 'JOHN', 'SE'),
(2, 'Alice', 'ME'),
(3, 'DEV', 'ML'),
(4, 'Tazan', 'ST'),
(5, 'Harman', 'WD');

INSERT INTO PROJ (Pno, PName, LOC) VALUES
('P1', 'FACE DETECTOR', 'US'),
('P2', 'MOILE APP', 'UAE'),
('P3', 'DATA PREPROCESSOR', 'MUBAI'),
('P4', 'CODE GENERATOR', 'DELHI'),
('P5', 'WEBSITE', 'NZ');

INSERT INTO ASG (Eno, Pno, DUR, RESP) VALUES
(1, 'P1', '5 Yrs', 'SE'),
(2, 'P2', '10 Yrs', 'ME'),
(3, 'P3', '15 Yrs', 'ML'),
(4, 'P4', '20 Yrs', 'ST'),
(5, 'P5', '25 Yrs', 'WD');

SELECT Ename, Pname FROM EMP, ASG, PROJ WHERE (LOC = "DELHI" OR LOC = "MUMBAI") AND EMP.Eno = ASG.  