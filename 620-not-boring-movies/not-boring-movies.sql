# Write your MySQL query statement below
select * 
from Cinema c
where id%2!=0 AND description!="boring"
    -- "ODD"           "not boring"
order by rating DESC;