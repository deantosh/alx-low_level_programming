#!/usr/bin/python3
"""
Module: defines a function that finds the perimeter of an island
described in grid. Grid is a list of integers:
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

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            # if cell is land zone
            if grid[row][col]:
                if row <= 0 or not grid[row - 1][col]:
                    perimeter += 1
                if col <= 0 or not grid[row][col - 1]:
                    perimeter += 1
                if row >= len(grid) - 1 or not grid[row + 1][col]:
                    perimeter += 1
                if col >= len(grid[row]) - 1 or not grid[row][col + 1]:
                    perimeter += 1

    return perimeter
