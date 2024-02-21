#!/usr/bin/python3
"""Defines the island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing the island.
    Returns:
        The perimeter of the island defined in grid.
    """
    fwidth = len(grid[0])
    fheight = len(grid)
    fedges = 0
    fsize = 0

    for f in range(fheight):
        for fj in range(fwidth):
            if grid[f][fj] == 1:
                fsize += 1
                if (fj > 0 and grid[f][fj - 1] == 1):
                    fedges += 1
                if (f > 0 and grid[f - 1][fj] == 1):
                    fedges += 1
    return fsize * 4 - fedges * 2
