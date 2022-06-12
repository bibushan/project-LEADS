# Runtime: 286 ms, faster than 93.79% of MySQL online submissions for Nth Highest Salary.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Nth Highest Salary.

CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
      SELECT DISTINCT Salary FROM Employee ORDER BY Salary DESC
      LIMIT 1 OFFSET N
  );
END