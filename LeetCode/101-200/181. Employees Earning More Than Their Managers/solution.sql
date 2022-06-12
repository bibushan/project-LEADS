# Write your MySQL query statement below

SELECT e1.name AS "Employee" FROM Employee e1 JOIN employee e2 ON e1.Managerid=e2.id WHERE e1.salary> e2.salary;