1# Write your MySQL query statemen
2SELECT DISTINCT num AS ConsecutiveNums
3FROM (
4    SELECT
5    num,
6    LEAD(num,1)OVER(ORDER BY id)AS num1,
7    LEAD(num,2)OVER(ORDER BY id)AS num2
8    FROM Logs
9)t
10WHERE num=num1
11AND num=num2;