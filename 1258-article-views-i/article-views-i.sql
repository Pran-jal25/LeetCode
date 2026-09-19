# Write your MySQL query statement below

-- "AS" is used to rename column or table:
-- "ORDER BY" is used to sort the items in increasing by default or using "DESC" keyword for -decreasing;
-- for unique value we use "DISTINCT" keyboard;

select distinct author_id AS id
from Views
where author_id=viewer_id
order by id;