1# Write your MySQL query statement below
2SELECT MAX(num) AS num
3FROM (
4    SELECT num
5    FROM MyNumbers
6    GROUP BY num
7    HAVING COUNT(*) = 1
8) AS t;