# Write your MySQL query statement below

SELECT A.name as Customers FROM Customers A WHERE NOT EXISTS ( SELECT 1 FROM ORDERS B WHERE A.id = B.customerId);

# SELECT A.Name as Customers from Customers A
# WHERE A.Id NOT IN (SELECT B.CustomerId from Orders B)