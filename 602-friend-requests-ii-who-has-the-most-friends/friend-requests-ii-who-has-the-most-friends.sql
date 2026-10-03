# Write your MySQL query statement below
select id,count(*) as num
from
(select requester_id as id 
from RequestAccepted

UNION ALL #isse duplicates id rhengi accept or req bhejne wale ki to pta chlta rhega kiske kitte frnd h

select accepter_id
from RequestAccepted
) AS friend_list #random name dena hi pdega wrna query nai chlegi;
group by id
order by num DESC
LIMIT 1;