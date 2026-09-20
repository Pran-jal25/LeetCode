# Write your MySQL query statement below

-- here we use "LEFT JOIN" coz we need "name" all items from left table and "unique_if" some items from right table;

select e.name as name, eu.unique_id as unique_id
from Employees e #"e" is the Alias(nickname)
left join EmployeeUNI eu
-- joining condition is "id" isi ke basis pe hm join krenge
on e.id=eu.id #dono table me "id" hi bs unique h 