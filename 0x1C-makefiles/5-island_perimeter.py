#!/usr/bin/python3
"""
Calculates the perimeter of the island described in grid
"""


def land_zone_perimeter(grid, rowIndex, zoneIndex):
    """perimeter for a 1 land zone
    desc:
        * grid is a list of list of integers:
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically
                (not diagonally).
            - Grid is rectangular, width and height don’t exceed 100
            - Grid is completely surrounded by water, and there is
                one island (or nothing).
            - The island doesn’t have “lakes” (water inside that isn’t
                connected to the water around the island).

    return:
        The perimeter of a 1 land zone
    """

    zonePerimeter = 0
    gridWidth = len(grid[rowIndex])
    gridHeight = len(grid)

    # Checks if there is a water zone on the right of current zone
    if (zoneIndex + 1 == gridWidth):
        zonePerimeter += 1
    elif (grid[rowIndex][zoneIndex + 1] == 0):
        zonePerimeter += 1

    # Checks if there is a water zone on the left of current zone
    if (zoneIndex - 1 == -1):
        zonePerimeter += 1
    elif (grid[rowIndex][zoneIndex - 1] == 0):
        zonePerimeter += 1

    # Checks if there is a water zone on the up of current zone
    if (rowIndex - 1 == -1):
        zonePerimeter += 1
    elif (grid[rowIndex - 1][zoneIndex] == 0):
        zonePerimeter += 1

    # Checks if there is a water zone on the below of current zone
    if (rowIndex + 1 == gridHeight):
        zonePerimeter += 1
    elif (grid[rowIndex + 1][zoneIndex] == 0):
        zonePerimeter += 1

    return zonePerimeter


def island_perimeter(grid):
    """island_perimeter
    desc:
        * grid is a list of list of integers:
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically
                (not diagonally).
            - Grid is rectangular, width and height don’t exceed 100
            - Grid is completely surrounded by water, and there is
                one island (or nothing).
            - The island doesn’t have “lakes” (water inside that isn’t
                connected to the water around the island).

    return:
        The perimeter of the island described in grid
    """

    perimeter = 0
    for rowIndex in range(len(grid)):
        for zoneIndex in range(len(grid[rowIndex])):
            if grid[rowIndex][zoneIndex] == 1:
                perimeter += land_zone_perimeter(grid, rowIndex, zoneIndex)

    return perimeter
