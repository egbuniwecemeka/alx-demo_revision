#!/usr/bin/python3

# Studying lists through solving problems
# Lists are comma-separeted value in squar brackets
roles = ["Loader", "Picker", "Data Entry", "Oficer", "Supervisor", "Manager"]
level1_3 = roles[:3]
print(level1_3)
mid_level = roles[3:]
print(mid_level)

# Append - Adds value to end of a list
all_roles = roles
id(all_roles) ==  id(roles)
all_roles.append("Snr Manager")
print(roles)

# assignment to slices
roles[0:2] = ["BOD", "MD","DMD"]
print(roles)

# Built in function len() also applies to lists
length = len(roles)
print(length)

# Lists can also be nested
skills = [["C", "Python", "MySQl","DevOps"], "Excel", "SAP"]
frontend = ["HTML", "CSS", "JavaScript"]
nested_skills = [skills, frontend]
print(nested_skills)
print(nested_skills[0][2])
