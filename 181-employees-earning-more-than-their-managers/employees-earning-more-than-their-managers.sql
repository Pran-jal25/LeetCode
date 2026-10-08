# Write your MySQL query statement below
witH Manager_salary As(
    select id,salary AS manager_salary
    from Employee
)
select e.name as Employee
from Employee e
INNER JOIN Manager_salary m
ON e.managerId=m.id
where e.salary>m.Manager_salary