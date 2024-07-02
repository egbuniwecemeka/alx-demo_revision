import MySQLdb

# Establishing connection to database
db = MySQLdb.connect(host=localhost, user=MY_USER, passwd=hbnb, db=MY_DB)

# Creating cursor object of DB connection
cur = db.cursor()

# Basic execute query without any parameter
cur.execute("CREATE TABLE song ( id INT UNSIGNED PRIMARY KEY AUTO_INCREMENT title TEXT NOT NULL )")


# Execute Insert/Single substitution query
# query executed with parameters
songs = ("Higher", "Happiness", "Feel Good")
for song in songs:
    cur.execute("INSERT INTO song (title) VALUE (%s)", song)
    print("Auto Increment ID: %s" % cur.lastrowid)

# It is important to note that where there are multiple parameters to pass, a tuple must be used to enclose them.
# These parameters are the n substituted from left to right using tuple[0]- tuple[n] indexing
cur.execute("SELECT * FROM song WHERE id = %s or id = %s", (1, 2))

# There are two methods to get the number of rows a query returns
# first is the MySQLdb specific way where the return value from the execute statement is saved
# second is using the Python DB-API 2.0 way. These makes it easier if ever database is needed to be changed.
numrows = cur.execute("SELECT * FROM song")
print("Selected %s rows" % numrows)
print("Selected %s rows" % cur.rowcount)


# OBTAINING QUERY RESULTS. One of the following methods needs to be used in obtaining query results
# Fetch All-at-once
cur.execute("SELECT * FROM song")
rows = cur.fetchall()
for row in rows:
    for col in row:
        print("%s", % col)
    print('\n')

# Fetch one-at-a-time
cur.execute("SELECT * FROM song WHERE id = 1")
print("Id: %s - Value %s" % cur.fetchone())
