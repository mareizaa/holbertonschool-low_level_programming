#!/usr/bin/python3
"""
Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    """
    count = 0
    side = 0
    height = len(grid)

    for h in range(height):
        for w in range(len(grid[h])):
            if grid[h][w] != 0:
                count += 1
                if grid[h - 1][w] and h != 0:
                    side += 1
                if grid[h][w - 1] and w != 0:
                    side += 1
    return (4 * count) - (2 * side)
