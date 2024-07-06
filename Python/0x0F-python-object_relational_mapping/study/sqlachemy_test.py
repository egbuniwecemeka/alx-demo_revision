#!/usr/bin/python3

from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

if __name__ == "__main__":

    Base = declarative_base()

    class User(Base):
        """ Table Meta-data"""
        __tablename__ = 'user'

        id = Column(Integer, primary_key=True)
        firstname = Column(String)
        lastname = Column(String)

        # Optional - defined from class 'Class': ; Shows nicely formatted User objects
        def repr(self):
            return print(f"{self.firstname} {self.lastname}")

    print(User.__table__)
