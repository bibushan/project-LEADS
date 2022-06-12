
# Runtime: 442 ms, faster than 37.54% of MySQL online submissions for Combine Two Tables.
# Memory Usage: 0B, less than 100.00% of MySQL online submissions for Combine Two Tables.

# Write your MySQL query statement below

SELECT FirstName, LastName, City, State
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;