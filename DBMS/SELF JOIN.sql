CREATE DATABASE SCHOOL;

USE SCHOOL;

CREATE TABLE STUDENT(
s_id INT,
name VARCHAR(50),
mentor_id INT
);

INSERT INTO STUDENT(s_id,name,mentor_id)
VALUES
(1,"VRAJ",NULL),
(2,"RAJ",1),
(3,"NIRAJ",1),
(4,"ANUJ",3);

SELECT * FROM STUDENT;

SELECT s1.name as mentor_name ,s2.name as student_name
FROM STUDENT AS s1
JOIN STUDENT AS s2
WHERE S1.s_id=s2.mentor_id;