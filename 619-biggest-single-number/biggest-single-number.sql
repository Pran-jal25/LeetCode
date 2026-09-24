# Write your MySQL query statement below
select MAX(num) as num
from MyNumbers
where num IN(
    select num
    from MyNumbers
    group by num
    having count(*)=1
-- SQL's WHERE keeps only rows where the condition is TRUE.
-- So the NULL row is automatically excluded.    

)