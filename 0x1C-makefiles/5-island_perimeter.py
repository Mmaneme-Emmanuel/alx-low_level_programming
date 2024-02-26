#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check left neighbor
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                # Check right neighbor
                if j < cols - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
                # Check top neighbor
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                # Check bottom neighbor
                if i < rows - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1

    return perimeter
