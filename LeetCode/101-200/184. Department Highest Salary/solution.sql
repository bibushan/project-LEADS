# Write your MySQL query statement below

SELECT Department.name AS Department, Employee.name AS Employee, Salary
FROM Employee JOIN Department ON Employee.Departmentid=Department.id
WHERE (Departmentid,Salary) IN
(SELECT Departmentid, MAX(Salary) FROM Employee GROUP BY Departmentid)