# Write your MySQL query statement below

-- "GROUP BY" isliye use krte h kuki ek hi chiz ko bar bar n likhna pde ek baar me hi likh jaye wo;

select s.user_id, IFNULL(ROUND(SUM(action= "confirmed")/COUNT(*),2),0.00)as confirmation_rate
from Signups s
left join Confirmations c
on s.user_id=c.user_id
group by s.user_id