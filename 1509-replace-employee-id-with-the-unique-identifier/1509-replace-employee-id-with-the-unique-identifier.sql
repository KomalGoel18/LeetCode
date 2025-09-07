# Write your MySQL query statement below
SELECT name,unique_id
FROM Employees
LEfT JOIN EmployeeUNI ON Employees.id=EmployeeUNI.id

