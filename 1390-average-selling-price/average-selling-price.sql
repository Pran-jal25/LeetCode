# Write your MySQL query statement below

-- •NOTE-jab jab aggregate function ayega so "GROUP BY" fucntion jrur ayega.

select p.product_id as product_id,IFNULL(ROUND(SUM(p.price*u.units)/SUM(u.units),2),0.00) as average_price
from Prices p
left join UnitsSold u
on p.product_id= u.product_id
-- purchase_date start or end date ke bichme rehni chaiye
and u.purchase_date>=start_date
and u.purchase_date<=end_date
group by p.product_id