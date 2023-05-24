#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list): List of list of integers.

    Grid specifics:
        0 -> represents a water zone.
        1 -> represents a land zone.
        One cell is a square with side length 1.
        cells are connected horizontally or vertically (not diagonally).
        It is rectangular and width and height should not exceed 100.
        Completely surrounded by water and there is one island (or nothing).
        The island doesn't have 'lakes'.

    Returns:
        Perimeter of the island described by grid.
    """
    land_cells = 0
    common_edges = 0

    for i, vector in enumerate(grid):
        for j, cell in enumerate(vector):
            if cell:
                land_cells += 1
                if (i > 0 and grid[i - 1][j] == 1):  # Chec above cell.
                    common_edges += 1
                if j > 0 and vector[j - 1] == 1:  # Check left cell.
                    common_edges += 1
    return land_cells * 4 - common_edges * 2