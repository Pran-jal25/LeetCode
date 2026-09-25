# Write your MySQL query statement below
select product_id,new_price as price 
from Products 
where (product_id,change_date) IN (
    select product_id,MAX(change_date) #max date but "16" ke pehle wali ya usi din wali
    from Products
    where change_date<="2019-08-16"
    group by product_id
)
-- NOW ab jiska price date "16" ke bd change hogi mtlb usse pehle uska price 10rs rhega;

UNION

select product_id,10 as price
from products
group by product_id
having MIN(change_date)>"2019-08-16"

-- or using "NOT IN" in second part means jo is date ke time nhi h0 wo wali id dedo ie here=""
-- "SELECT product_id, 10 AS price
-- FROM Products
-- WHERE product_id NOT IN (
--     SELECT product_id
--     FROM Products
--     WHERE change_date <= '2019-08-16'
-- );"