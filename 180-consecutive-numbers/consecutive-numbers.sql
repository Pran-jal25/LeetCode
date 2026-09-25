# Write your MySQL query statement below
select DISTINCT l1.num as ConsecutiveNums 
from Logs l1
JOIN Logs l2
    on l2.id=l1.id+1 #means "l2" jo h "l1" se ek step aage h
JOIN Logs l3
    on l3.id=l1.id+2 #means "l2" jo h "l1" se do step aage h
where l1.num=l2.num
    and l2.num=l3.num;