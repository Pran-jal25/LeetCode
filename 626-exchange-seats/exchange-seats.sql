# Write your MySQL query statement below
SELECT
    CASE
        WHEN
            id=(SELECT MAX(id) from SEAT) AND MOD(id,2)=1
            -- id max ie last h and odd h to whi id wps krdo
            then id
        WHEN 
            MOD(id,2)=1 #odd id h to id+1(aage wale)se replace krdenge
            then id+1
        ELSE # even h to ek pehle wale se replace krdo
            id-1
        END as id,student
from SEAT
order by id ASC