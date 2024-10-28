# Write your MySQL query statement below
SELECT Users.name AS NAME, IFNULL(SUM(Rides.distance), 0) AS travelled_distance
FROM Users
LEFT JOIN Rides ON Rides.user_id =  Users.id
GROUP BY Users.ID, Users.name
ORDER BY travelled_distance DESC, Users.name
