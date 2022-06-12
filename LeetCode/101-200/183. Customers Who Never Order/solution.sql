Runtime: 559 ms, faster than 32.17% of MySQL online submissions for Customers Who Never Order.
Memory Usage: 0B, less than 100.00% of MySQL online submissions for Customers Who Never Order.

# Write your MySQL query statement below

SELECT name AS Customers FROM Customers LEFT JOIN Orders ON Orders.customerId=Customers.id WHERE CustomerId IS NULL;