Runtime: 412 ms, faster than 37.03% of MySQL online submissions for Duplicate Emails.
Memory Usage: 0B, less than 100.00% of MySQL online submissions for Duplicate Emails.

# Write your MySQL query statement below

SELECT DISTINCT p1.Email FROM person p1 JOIN person p2 ON p1.email=p2.email AND p1.id!=p2.id