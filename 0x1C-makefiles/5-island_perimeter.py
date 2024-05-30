#!/usr/bin/python3
"""
Module defines a function that returns the perimeter of an island.
"""


def island_perimeter(grid):
    """returns: the primeter of an island"""

    # get grid dimensions
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j]:
                if not grid[i][j + 1]:
                    perimeter += 1
                if not grid[i][j - 1]:
                    perimeter += 1
                if not grid[i + 1][j]:
                    perimeter += 1
                if not grid[i - 1][j]:
                    perimeter += 1
    return perimeter
