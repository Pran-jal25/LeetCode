# Write your MySQL query statement below
SELECT MAX(salary) AS SecondHighestSalary -- second loop h ye first loop me max dega ye and second me secondhighest
FROM Employee
WHERE salary<(SELECT MAX(salary) FROM Employee);

