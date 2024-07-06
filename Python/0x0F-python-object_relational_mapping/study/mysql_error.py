import MySQLdb

# Get data from database
try:
    cur.execute("SELECT * FROM song")
    cur.fetchall()
except MySQLdb.Error, e:
    try:
        print("[%d]: %s" % (e.args[0], e.args[1]))
    except IndexError:
        print("MySQL Error %s" % str(e))
# Print result in comma delimited format
for row in rows:
    for col in row:
        print("%s," % col)
    print('\n')
