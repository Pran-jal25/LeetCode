# Write your MySQL query statement below

select v.customer_id,COUNT(customer_id) AS count_no_trans
from Visits v #coz we traverse over all "Visits" table
left join Transactions t
on v.visit_id=t.visit_id
where t.transaction_id is NULL #condition where customer visit but do not make a    ny transaction
Group BY v.customer_id; #"GROUP BY" ke bd jo ata h whi select ke bad ana chahiye