# 0x0F. Python - Object-relational mapping

* Two major concepts will be touched on in this project namely
* MySQLdb - used to connect MyQSL databases and execute database queries.
* SQLAlchemy - Object Relational Mappers, used i extracting storage for usage. ORMs are code libraries that automates the transfer data stored in relational databases to be used aas objects that can be easily be used by applications. ie it is a bidge between relational databases and fields/Python objects.
* Python ORM are not needed for accessing relational databases instead low-level access is provided by a database connector eg MySQL-Python

## Downsides of using an ORM

* Impedance mismatch (disconnect between the database model and object relational model)
* Potential for reduced performance (performance issue comes as a result of translation
* Shift in complexity from database to application code

## Introduction to MySQL Python

* MySQL Python is the MySQL driver for the Python language.
* It is divided into two parts namely (i) wrapper library _'_mysql' (ii) DB-API 2.0 module 'MYSQLdb'
* MYSQLdb conforms to the Python PEP 249 standard
* TO use MYSQLdb, it has to be imported.


## Installation

* First I created a venv that I used for the project.
* sudo apt-get install python3.8-venv
* python3 -m venv venv
* source/bin/activate

## Install MySQLdb module version 2.0.x

To install MySQLdb, MySQL needs to be installed.

* $ sudo apt-get install python3-dev
* $ sudo apt-get install libmysqlclient-dev
* $ sudo apt-get install zlib1g-dev
* $ sudo pip3 install mysqlclient

## Connecting to a MySQL database, Cursors, Executing Queries & Obtaining Results

* Next step, make a connection to my database using MySQLdb
* All **Python DM-API 2.0  make uses of the function 'model.connect'**
* this is the function used to connect to DB.
* module_name.connect() passes the parameters in to the Python extension \_mysql
* After connection, a cursor is created. A cursor objects allows for multiple m=working environments from a single database connection. This is done using the cursor method - cursor(). A cursor parameter can also be passed for certain results or parameters.
* After a cursor object has been created we need to execute our queries using the execute method - execute(). It  takes only one parameter which is the query. In the case of substitution, a second parameter which is a tuple containing values to be substituted must be given.
* After an execute statement has been executed, the results of the query needs to be obtained. This can be done in two ways. namely (i) Fetch All-at-Once (ii) Fetch One-at-a-Time
* Be careful in using the cursor class "CursorUseResultMixIn" because it stores its result on the server and feeds them to the program on request.

## Execptions and Errors

* 'module.Error' is a top level package used by DB to catch all database exceptions. In MySQL, it is MYSQLdb.Error
* Every DB statement executed, has a potential to raise an error. Therefore, anytime a database query is executed, it should be 
