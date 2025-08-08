-- In this SQL file, write (and comment!) the schema of your database, including the CREATE TABLE, CREATE INDEX, CREATE VIEW, etc. statements that compose it

--**************************** CREATING ********************************

-- CREATION OF information TABLE GIVING INFORMATION ABOUT ALL THE STUDENTS.
CREATE TABLE information (
    'id' INTEGER,
    'gender' TEXT,
    'ethnic_group' TEXT,
    'parent_edu' TEXT,
    PRIMARY KEY('id')
);

-- CREATION OF average_scores TABLE GIVING INFORMATION ABOUT THE AVERAGE OF SCORES OF STUDENTS.
CREATE TABLE average_scores (
    id INT,
    averagemathscore DECIMAL(5, 2),
    averagereadingscore DECIMAL(5, 2),
    averagewritingscore DECIMAL(5, 2),
    PRIMARY KEY(id),
    FOREIGN KEY(id) REFERENCES information(id)
);


-- CREATION OF student_performance TABLE GIVING INFORMATION ABOUT THE PERFORMANCES OF VARIOUS STUDENTS EITHER THEY 'Excelling' OR 'Struggling' OR THEY ARE 'Average'
CREATE TABLE student_performance (
    id INT,
    mathperformance VARCHAR(20),
    readingperformance VARCHAR(20),
    writingperformance VARCHAR(20),
    PRIMARY KEY(id),
    FOREIGN KEY(id) REFERENCES information(id)
);


-- CREATION OF students_excelling_all TABLE WHICH GIVES INFO. ABOUT STUDENTS EXCELLING IN ALL FIELDS.
CREATE TABLE students_excelling_all (
    id INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY (id) REFERENCES information(id)
);


-- CREATION OF students_excelling_all TABLE WHICH GIVES INFO. ABOUT STUDENTS STRUGGLING IN ANY OF THE FIELDS.
CREATE TABLE students_struggling_any (
    id INT,
    PRIMARY KEY(id),
    FOREIGN KEY (id) REFERENCES information(id)
);


--******************************* INDEXING *********************************

-- Indexes on Student ID
CREATE INDEX idx_data_id ON data(Id);
CREATE INDEX idx_average_scores_id ON average_scores(Id);
CREATE INDEX idx_student_performance_id ON student_performance(Id);

-- Indexes on Gender
CREATE INDEX idx_data_gender ON data(Gender);

-- Indexes on Ethnic Group
CREATE INDEX idx_data_ethnic_group ON data(EthnicGroup);

-- Indexes on Performance Columns
CREATE INDEX idx_data_math_score ON data(MathScore);
CREATE INDEX idx_data_reading_score ON data(ReadingScore);
CREATE INDEX idx_data_writing_score ON data(WritingScore);
