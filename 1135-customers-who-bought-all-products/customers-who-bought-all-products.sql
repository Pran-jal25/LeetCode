# Write your MySQL query statement below
select customer_id
from Customer
group by customer_id
-- distinct product_key is from customer table and count is from product table; if they both are equal then it means sb kharid lia user ne
having COUNT(DISTINCT product_key)= (select COUNT(*)
from Product 
);