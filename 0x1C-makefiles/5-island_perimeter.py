#!/usr/bin/python3
"""Defins an island perimeter measuring function."""


def island_perimeter(grid):
    """
    Return thr perimeter of the island
    The grid represents water by 0 and land by 1

    Args:
        grid (list): A list of integers
    Returns:
        The perimeter of the island
    """
    vrt = len(grid)                 #Vertical direction
    dgn = len(grid[0])              #Diagonal direction
    prm = 0
    edges = 0

    for i in range(vrt):
        for j in range(dgn):
           if grid[i][j] == 1:
                prm += 1
                if (j > 0 and grid[i][j - 1] == 1):
                   edges += 1
                if(i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return prm * 4 - edges * 2


