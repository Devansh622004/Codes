-- Create tables
create table contests (
    contest_id int, 
    hacker_id int, 
    namee varchar(20)
);

create table colleges (
    college_id int, 
    contest_id int
);

create table challenges (
    challenge_id int, 
    college_id int
);

create table view_stats (
    challenge_id int, 
    total_views int, 
    total_unique_views int
);

create table submission_stats (
    challenge_id int, 
    total_submissions int, 
    total_accepted_submissions int
);

-- Insert data into contests
insert into contests(contest_id,hacker_id,namee) values
(66406,17973,'flose'),
(66556,79153,'angela'),
(94828,80275,'frank');

-- Insert data into colleges
insert into colleges(college_id,contest_id) values
(11219,66406),
(32473,66556),
(56685,94828);

-- Insert data into challenges (must exist for view_stats & submission_stats)
insert into challenges(challenge_id,college_id) values
(18765,11219),
(42127,11219),
(60292,32473),
(72974,56685);

-- Insert data into view_stats (3 columns must be filled)
insert into view_stats(challenge_id,total_views,total_unique_views) values
(18765,11219,5000),
(42127,11219,4500),
(60292,32473,12000),
(72974,56685,20000);

-- Insert data into submission_stats (4 columns must be filled)
insert into submission_stats(challenge_id,total_submissions,total_accepted_submissions) values
(18765,1500,700),
(42127,1800,900),
(60292,2200,1100),
(72974,3000,1500);

SELECT 
    c.contest_id,
    c.hacker_id,
    c.namee AS name,
    SUM(ss.total_submissions) AS total_submissions,
    SUM(ss.total_accepted_submissions) AS total_accepted_submissions,
    SUM(vs.total_views) AS total_views,
    SUM(vs.total_unique_views) AS total_unique_views
FROM contests c
JOIN colleges col ON c.contest_id = col.contest_id
JOIN challenges ch ON col.college_id = ch.college_id
LEFT JOIN submission_stats ss ON ch.challenge_id = ss.challenge_id
LEFT JOIN view_stats vs ON ch.challenge_id = vs.challenge_id
GROUP BY c.contest_id, c.hacker_id, c.namee
HAVING SUM(ss.total_submissions) + SUM(ss.total_accepted_submissions) + SUM(vs.total_views) + SUM(vs.total_unique_views) > 0
ORDER BY c.contest_id;
