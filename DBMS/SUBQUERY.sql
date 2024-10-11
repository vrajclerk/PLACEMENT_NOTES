CREATE DATABASE COMPANY;

USE COMPANY;

CREATE TABLE Employee (
    ID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Age INT,
    Department VARCHAR(50),
    City VARCHAR(50),
    Salary DECIMAL(10, 2)
);

INSERT INTO Employee (ID, Name, Age, Department, City, Salary) VALUES
(1, 'Vraj Clerk', 21, 'Engineering', 'Surat', 75000.00),
(2, 'Raj Clerk', 20, 'Engineering', 'Pilani', 65000.00),
(3, 'Alice Johnson', 35, 'Finance', 'Chicago', 15000.00),
(4, 'Bob Brown', 28, 'Human Resources', 'Houston', 60000.00),
(5, 'Charlie Davis', 40, 'Engineering', 'San Francisco', 19000.00);

SELECT * FROM EMPLOYEE;

-- EMP SALARY > MIN_SALARY

-- MIN SALARY
SELECT MIN(salary)
FROM 
EMPLOYEE;

SELECT name,salary
from employee
WHERE salary > (SELECT MIN(salary)
FROM 
EMPLOYEE);

-- find employees with min age

-- min age
SELECT min(age) 
FROM employee;

SELECT name,age
FROM employee 
WHERE age = (SELECT min(age)
from employee);

-- from clause

-- find employees who is having age greater than min age
SELECT min(age) AS min_age FROM employee;

SELECT emp.name, emp.Age
FROM employee emp,
(SELECT min(age) AS min_age FROM employee) AS min_age_query
WHERE emp.age>min_age_query.min_age;


-- find the employees with an average age with emplouee age

SELECT AVG(AGE) FROM EMPLOYEE;

SELECT age 
,(SELECT AVG(AGE) FROM EMPLOYEE) AS avg_age_query
FROM employee emp;