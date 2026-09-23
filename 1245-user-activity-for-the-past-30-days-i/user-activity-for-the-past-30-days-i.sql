# Write your MySQL query statement below
select activity_date as day,COUNT(distinct user_id) as active_users
from Activity 
where activity_date>="2019-06-28" and activity_date<="2019-07-27"
-- means last date 2019-07-27 ye honi chahiye to start date june me hogi 30 din pehle;
group by activity_date;