#!/usr/bin/python3

import MySQLdb

conn = MySQLdb.connect(host="localhost", port=3306, user="root",
                       passwd="Cemeka1995.", db="Profile_db", charset="utf8")
cursor = conn.cursor()
profile_query = """
CREATE TABLE IF NOT EXISTS users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) UNIQUE NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    age INT
    )
"""

insert_data = """
INSERT INTO users (username, email, age) VALUES
('Joanna', 'joanna23@gmail.com', 25)
"""


cursor.execute(profile_query)
cursor.execute(insert_data)

conn.commit()

select_data = "SELECT * FROM users"

cursor.execute(select_data)

users = cursor.fetchall()

for user in users:
    print(user)
cursor.close()
conn.close()
