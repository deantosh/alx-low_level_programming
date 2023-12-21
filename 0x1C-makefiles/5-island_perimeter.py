#!/usr/bin/python3
"""
Module: defines a function that finds the perimeter of an island described in grid.
Grid is a list of integers:
  - 0 represents water zone
  - 1 represents land zone
  - one cell is square with side length 1
  - grid cells are connected horizontally and vertically (not diagonally)
  - grid is rectangular and height do not exceed 100
Grid is completely surrounded by water, there is one island or nothing.
The island does not have lakes.
"""

def island_perimeter(grid):
    """finds the perimeter of an island described in grid"""

    perimeter = 0
    count = 0
    for row in grid:
        for i in row:
            if i == 1:
                count += 1
                if count == 1:
                    perimeter += 3
                else:
                    perimeter += 2
    perimeter += 1
    if count == 0:
        perimeter = 0

    return perimeter
