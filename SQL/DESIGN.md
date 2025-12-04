# Design Document

By YOUR NAME HERE  :- DEVANSH VASHISTH

Video overview: <https://youtu.be/Q6RUBHa6ulA>

## Scope

In this section you should answer the following questions:

* What is the purpose of your database?


1. Basic Student Performance Analysis :-

-->    Objective: Analyze the performance of students in different subjects.
       Steps:
            a) Calculate the average scores for Math, Reading, and Writing.
            b) Identify students who are excelling or struggling in each subject.
            c) Generate a report of average scores based on gender or ethnic group.


* Which people, places, things, etc. are you including in the scope of your database?

Things: students id, students gender, student's parents education, student's lunch type, student's test preparation, student's marks in math, student's marks in reading, student's marks in writing

* Which people, places, things, etc. are *outside* the scope of your database?
things

Things: student's average scores in maths, reading and writing

## Functional Requirements

In this section you should answer the following questions:

* What should a user be able to do with your database?

-> View runtime of all student content.
-> Retrieve all the data about students (e.g. performance, average, excelling/struggling)
-> Can perform deletions.
-> View all the student's content.
-> Can perform additional insertions.

* What's beyond the scope of what a user should be able to do with your database?

-> Real-time updates or live data tracking.

## Representation

### Entities

In this section you should answer the following questions:

* Which entities will you choose to represent in your database?

-> information
-> average_scores
-> student_performance
-> students_excelling_all
-> students_struggling_any

* What attributes will those entities have?

-> ENTITIES                          ATTRIBUTES
   information                       id, gender, ethnic_group, parent_edu
   average_scores                    id, averagemathscore, averagereadingscore, averagewritingscore
   student_performance               id, mathperformance, readingperformance, writingperformance
   students_excelling_all            id
   students_struggling_any           id

* Why did you choose the types you did?

->  'information'.'id' INTEGER,
    'gender' TEXT,
    'ethnic_group' TEXT,
    'parent_edu' TEXT

->  average_scores.id INT,
    averagemathscore DECIMAL(5, 2),
    averagereadingscore DECIMAL(5, 2),
    averagewritingscore DECIMAL(5, 2)

->  student_performance.id INT,
    mathperformance VARCHAR(20),
    readingperformance VARCHAR(20),
    writingperformance VARCHAR(20)

->  students_excelling_all.id INTEGER

->  students_struggling_any.id INT

* Why did you choose the constraints you did?

-> TABLE NAME                           CONSTRAINTS
   inforamation                         PRIMARY KEY('id')
   average_scores                       PRIMARY KEY(id), FOREIGN KEY(id) REFERENCES information(id)
   student_performance                  PRIMARY KEY(id), FOREIGN KEY(id) REFERENCES information(id)
   students_excelling_all               PRIMARY KEY(id), FOREIGN KEY(id) REFERENCES information(id)
   students_struggling_any              PRIMARY KEY(id), FOREIGN KEY(id) REFERENCES information(id)

### Relationships

In this section you should include your entity relationship diagram and describe the relationships between the entities in your database.

ER-DIAGRAM ->  ![alt text](<ER - DIAGRAM.png>)

ITS CONTENTS( RELATIONSHIPS ) :-

1) information and student_performance:

The id field in the information table is a primary key.
The id field in the student_performance table is a foreign key that references the id in the information table.
This represents a one-to-one relationship between information and student_performance.

2) information and average_scores:

The id field in the information table is a primary key.
The id field in the average_scores table is a foreign key that references the id in the information table.
This represents a one-to-one relationship between information and average_scores.

3) information and students_excelling_all:

The id field in the information table is a primary key.
The id field in the students_excelling_all table is a foreign key that references the id in the information table.
This represents a one-to-one relationship between information and students_excelling_all.

4) information and students_struggling_any:

The id field in the information table is a primary key.
The id field in the students_struggling_any table is a foreign key that references the id in the information table.
This represents a one-to-one relationship between information and students_struggling_any.

These relationships imply that each student has associated information about their demographic details, performance in various subjects, their average scores, whether they excel in all subjects, or struggle in any subject, all linked via their unique id.

## Optimizations

In this section you should answer the following questions:

* Which optimizations (e.g., indexes, views) did you create? Why?

-> THE FOLLOWING INDEXES ARE MADE TO INCREASE THE SPEED OF RETRIEVAL OF CONTENTS OF VARIOUS TABLES:-

-> Indexes on Student ID
CREATE INDEX idx_data_id ON data(Id);
CREATE INDEX idx_average_scores_id ON average_scores(Id);
CREATE INDEX idx_student_performance_id ON student_performance(Id);

-> Indexes on Gender
CREATE INDEX idx_data_gender ON data(Gender);

-> Indexes on Ethnic Group
CREATE INDEX idx_data_ethnic_group ON data(EthnicGroup);

-> Indexes on Performance Columns
CREATE INDEX idx_data_math_score ON data(MathScore);
CREATE INDEX idx_data_reading_score ON data(ReadingScore);
CREATE INDEX idx_data_writing_score ON data(WritingScore);
