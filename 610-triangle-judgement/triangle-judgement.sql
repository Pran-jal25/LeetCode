# Write your MySQL query statement below
-- condition for triangle is :
-- sum of 2 sides > the third side

-- select *,
--     IF(x+y>z and y+z>x and z+x>y,"Yes","No") as triangle
-- from Triangle

-- second approach:
select *,
    CASE
    when x+y>z and y+z>x and z+x>y 
    then "Yes"
    else "No"
   END as triangle
from Triangle;