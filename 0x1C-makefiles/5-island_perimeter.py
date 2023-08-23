#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if l <= 0 or not grid[l - 1][j]:
        num += 1
    if j <= 0 or not grid[l][j - 1]:
        num += 1
    if j >= len(grid[l]) - 1 or not grid[l][j + 1]:
        num += 1
    if l >= len(grid) - 1 or not grid[l + 1][j]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    for l in range(len(grid)):
        for j in range(len(grid[l])):
            if grid[l][j]:
                perim += num_water_neighbors(grid, l, j)

    return perim
