#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print()

    for rows in range(len(matrix)):
        for cols in range(len(matrix[rows])):
            if cols != len(matrix[rows]) - 1:
                space = ' '
            else:
                space = ''
            print(f"{matrix[rows][cols]}", end=space)
        print()
