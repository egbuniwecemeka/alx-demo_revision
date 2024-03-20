#!/usr/bin/python3

from sqlalchemy import create_engine, Column, Integer, String
from sqlalchemy.orm import declarative_base
from sqlalchemy.orm import sessionmaker

engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format("root", "Cemeka1995.", "customers"), pool_pre_ping=True)

Base = declarative_base()

class Customers(Base):
    __tablename__ = "customers"
    id = Column(Integer, primary_key=True)
    name = Column(String(45), nullable=False)
    email = Column(String(60), unique=True, nullable=False)
    age = Column(Integer)

Base.metadata.create_all(engine)

Session = sessionmaker(bind=engine)
session = Session()

buying_customers = [
        {'name': 'Egbuniwe', 'email': 'egbuniwecemeka@gmail.com', 'age': 29},
        {'name': 'Nifemi', 'email': 'nifemiawolola@gmail.com', 'age': 29},
]


for bc in buying_customers:
    new_customers = Customers(name=bc["name"], email=bc["email"], age=bc["age"])
    session.add(new_customers)

session.commit()

customers = session.query(Customers).all()
for customer in customers:
    print(customer.id, customer.name, customer.email, customer.age)

session.close()
