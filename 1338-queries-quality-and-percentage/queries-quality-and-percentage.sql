# Write your MySQL query statement below
select query_name,ROUND(AVG(rating/position),2) as quality,ROUND(AVG(IF( rating<3, 1,0))*100,2) as poor_query_percentage
-- poor_query_percentage is  calculated by - if rating 3 se km h then use "1" bna do wrna "0" rehne do.coz jb percent nikalenge to "3" se upr wale 0 rhenge or chhote 1 so total no. mese  percent ajayega
from Queries
group by query_name