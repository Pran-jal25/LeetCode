select
    d.name as Department,
    e.name as Employee,
    e.salary as Salary
from(
    select 
        name,
        salary,
        departmentId,
        DENSE_RANK() OVER(partition by departmentId ORDER BY salary DESC)as salary_rank
    FROM Employee
)
e Join Department d on e.departmentId=d.id
where e.salary_rank<=3;
         
