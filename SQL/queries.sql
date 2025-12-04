-- In this SQL file, write (and comment!) the typical SQL queries users will run on your database

-- INSERTING DATA TO information TABLE.
INSERT INTO information (id, gender, ethnic_group, parent_edu)
SELECT Id, Gender, EthnicGroup, ParentEduc FROM data LIMIT 10;



-- INSERTING DATA TO average_scores TABLE.
INSERT INTO average_scores (Id, AverageMathScore, AverageReadingScore, AverageWritingScore)
SELECT
    Id,
    ROUND(AVG(MathScore), 2) AS AverageMathScore,
    ROUND(AVG(ReadingScore), 2) AS AverageReadingScore,
    ROUND(AVG(WritingScore), 2) AS AverageWritingScore
FROM
    data
GROUP BY
    Id
LIMIT 10;



-- INSERTING DATA TO student_performance TABLE.
INSERT INTO student_performance (Id, MathPerformance, ReadingPerformance, WritingPerformance)
SELECT
    Id,
    CASE
        WHEN MathScore >= 85 THEN 'Excelling'
        WHEN MathScore <= 50 THEN 'Struggling'
        ELSE 'Average'
    END AS MathPerformance,
    CASE
        WHEN ReadingScore >= 85 THEN 'Excelling'
        WHEN ReadingScore <= 50 THEN 'Struggling'
        ELSE 'Average'
    END AS ReadingPerformance,
    CASE
        WHEN WritingScore >= 85 THEN 'Excelling'
        WHEN WritingScore <= 50 THEN 'Struggling'
        ELSE 'Average'
    END AS WritingPerformance
FROM
    data
LIMIT 10;



-- INSERTING DATA TO students_excelling_all TABLE.
INSERT INTO students_excelling_all (Id)
SELECT DISTINCT
    Id
FROM
    data
WHERE
    MathScore >= 85 AND ReadingScore >= 85 AND WritingScore >= 85
    AND Id IN (SELECT id FROM information)
    AND Id NOT IN (SELECT Id FROM students_excelling_all)
LIMIT 10;



-- INSERTING DATA TO students_struggling_any TABLE.
INSERT OR IGNORE INTO students_struggling_any (Id)
SELECT
    Id
FROM
    data
WHERE
    (MathScore <= 50 OR ReadingScore <= 50 OR WritingScore <= 50)
    AND Id IN (SELECT id FROM information)
LIMIT 10;


-- SELECTING DATA WHERE id IS GREATER THAN EQUALS TO 5.
SELECT * FROM information
WHERE id >= 5;



-- SELECTING DATA WHERE id IS EQUALS TO 9.
SELECT * FROM average_scores
WHERE id = 9;



-- SELECTING DATA WHERE mathperformance, readingperformance, writingperformance IS EQUALS TO 'Average'.
SELECT * FROM student_performance
WHERE mathperformance = 'Average' AND readingperformance = 'Average' AND writingperformance = 'Average';



-- SELECTING DATA WHERE id BETWEEN 1 AND 5.
SELECT * FROM students_excelling_all
WHERE id BETWEEN 1 AND 5;



-- SELECTING DATA WHERE id IS IN DESCENDING ORDER.
SELECT * FROM students_struggling_any
ORDER BY id DESC;
