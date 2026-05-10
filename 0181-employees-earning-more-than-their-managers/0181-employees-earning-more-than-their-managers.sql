# Write your MySQL query statement below
select a.name AS employee
from Employee a
join Employee b
on a.managerId = b.id
where b.salary < a.salary;