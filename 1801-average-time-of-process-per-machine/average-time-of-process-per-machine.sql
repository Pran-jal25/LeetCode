# Write your MySQL query statement below

select a1.machine_id,ROUND(AVG(a2.timestamp-a1.timestamp),3)as processing_time
#this "3" denotes the round upto 3 decimal value
from Activity a1
inner join Activity a2 
-- using "INNER JOIN" we fetch the common part from both the table
-- a1=first machine(start time) and a2=second machine(end time)
on a1.process_id=a2.process_id
and a1.machine_id=a2.machine_id
AND a1.activity_type = 'start'
AND a2.activity_type = 'end'  
Group by a1.machine_id; 
-- machine_id bhot sari h to iske basis pe hi apn ko group by krdena h
-- or even select ke bd jo likhte h whi group by ke bd likh dete h: 
