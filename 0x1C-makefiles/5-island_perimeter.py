#!/usr/bin/python3
"""A function that measures the perimeter of a land"""

def island_perimeter(grid):
    """Initializing variables that holds the result 
	that could be gotten whilemeaasurement is on going.
    """
    length = len(grid)
    width = len(grid[0])
    edges = 0
    total_size = 0

    for i in range(length):
        for j in range(width):

            if grid[i][j] == 1:
                total_size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return total_size * 4 - edges * 2 
