# Write your MySQL query statement below
-- 3 table di h so join ki help se pehle kinhi do ka result bna lo fir us result ko last wali table se join krdena 


select st.student_id as student_id,st.student_name as student_name,sub.subject_name as subject_name,
COUNT(e.subject_name) as attended_exams
from Students st
-- here "CROSS JOIN" is used coz we add all things from the "students" and "subjects" table;
cross join Subjects sub
-- fir iska jo result ayega use "Examinations table" ke sath me left join krdenge
left join Examinations e
on st.student_id=e.student_id
and sub.subject_name=e.subject_name
group by st.student_id,st.student_name,sub.subject_name
-- Return the result table ordered by student_id and subject_name.so:
order by st.student_id,sub.subject_name;
