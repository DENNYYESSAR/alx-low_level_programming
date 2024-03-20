#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int):
        Represents the island with 1's as land and 0's as water.

    Returns:
    int: The perimeter of the island.

    Example:
    >>> grid = [
    ...    [0, 0, 0, 0, 0, 0],
    ...    [0, 1, 0, 0, 0, 0],
    ...    [0, 1, 0, 0, 0, 0],
    ...    [0, 1, 1, 1, 0, 0],
    ...    [0, 0, 0, 0, 0, 0]
    ... ]
    >>> island_perimeter(grid)
    12
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
