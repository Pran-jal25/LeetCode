# Write your MySQL query statement below
SELECT
    CASE
        WHEN
            id=(SELECT MAX(id) from SEAT) AND MOD(id,2)=1
            -- id max ie last h and odd h to whi id rhegi
            then id
        WHEN 
            MOD(id,2)=1 #odd id h to id+1 index me daldo
            then id+1
        ELSE # even h to ek pehle wale index id me daldo jo iska real h usse ek pehle wale id
            id-1
        END as id,student
from SEAT
order by id ASC # isko nhi lgayenge to (id+1) or (id-1) index me rkha rhega