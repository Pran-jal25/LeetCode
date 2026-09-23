# Write your MySQL query statement below

-- for finding percentage formula
-- count krlo sari uniques id's ko jitni h "register table" se then sari user_id ko count krlo "users table" me se or divide krdo or 100 se multiply krdo
select contest_id,ROUND((COUNT(distinct user_id)*100)/(select COUNT(user_id)from Users),2) as percentage
from Register
group by contest_id
order by percentage DESC,contest_id ASC;