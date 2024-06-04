import sqlite3
import os

db_path = os.path.join('Problems/Generic_Problems/','movies.db')

try:
    with sqlite3.connect(db_path) as db_create:
        db_create.execute("CREATE TABLE IF NOT EXISTS MOVIES(Name TEXT, Year INTEGER, Rating INTEGER)")
        db_create.commit()
except:
    print(db_create.Error)


try:
    add_value = sqlite3.connect(db_path)
    add_value.execute("INSERT INTO MOVIES VALUES ('Rise of the Planet of the Apes', 2011, 77)")
    add_value.execute("INSERT INTO MOVIES VALUES ('Dawn of the Planet of the Apes', 2014, 91)")
    add_value.execute("INSERT INTO MOVIES VALUES ('Alien', 1979, 97)")
    add_value.execute("INSERT INTO MOVIES VALUES ('Aliens', 1986, 98)")
    add_value.execute("INSERT INTO MOVIES VALUES ('Mad Max', 1979, 95)")
    add_value.execute("INSERT INTO MOVIES VALUES ('Mad Max 2: The Road Warrior', 1981, 100)")
    add_value.commit()
except:
    print(add_value.Error)

with sqlite3.connect(db_path) as output:
    cursor = output.cursor()
    cursor.execute("SELECT * FROM MOVIES")
    for out in cursor.fetchall():
        print(out)