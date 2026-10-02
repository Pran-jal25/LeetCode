# Write your MySQL query statement below
(select name as results
from Users
INNER JOIN MovieRating USING (user_id) #"ON" ke use se bhi kr skte or "using" se bhi
group by user_id
order by COUNT(rating)DESC,name
LIMIT 1 # it only gives the upper most layer
)

UNION ALL #it can return duplicate row but UNION will not so yaha pe duplicates askti h values so ye use kia;

(select title as results
from Movies
INNER JOIN MovieRating USING (movie_id)
Where MONTH(created_at)="02" AND YEAR(created_at)="2020"
group by title
order by AVG(rating)DESC,title
LIMIT 1 
)