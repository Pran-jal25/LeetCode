# Write your MySQL query statement below
select 
    e.employee_id as employee_id,
    e.name as name,
    COUNT(m.employee_id) as reports_count,
    ROUND(AVG(m.age)) as average_age
from Employees e
INNER JOIN Employees m
-- e = employee/manager
-- m = employee who reports
ON e.employee_id=m.reports_to       
GROUP BY e.employee_id,e.name
order by employee_id;