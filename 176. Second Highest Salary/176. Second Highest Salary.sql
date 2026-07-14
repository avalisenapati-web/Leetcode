1# Write your MySQL query statement below
2SELECT (
3    SELECT DISTINCT salary
4    FROM Employee
5    ORDER BY salary DESC
6    LIMIT 1 OFFSET 1
7)AS SecondHighestSalary
8