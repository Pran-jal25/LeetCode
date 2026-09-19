# Write your MySQL query statement below

-- "CHAR_LENGTH" is used to find the lenght of the character;
-- it returns the value in = "char"

-- "LENGTH()" gives in = "bytes"

select tweet_id
from Tweets
where CHAR_LENGTH(content) > 15;