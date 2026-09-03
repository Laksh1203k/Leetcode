# Write your MySQL query statement below
SELECT Email from person GROUP BY Email having count(Email)>1;