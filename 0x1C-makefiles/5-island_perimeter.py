#!/usr/bin/python3
"""
a function to calculate perimeter of island
"""


def island_perimeter(grid):
    """the function in question"""
    if not grid:
        return 0

    ordinate = []
    for i, subm in enumerate(grid):
        for j, value in enumerate(subm):
            if value == 1:
                ordinate.append((i, j))
    if not ordinate:
        return 0

    perimeter = 0
    for i, j in ordinate:
        branches = 0
        for a, b in ordinate:
            if (a == i - 1 and b == j) or \
                (a == i and b == j - 1) or \
                (a == i + 1 and b == j) or \
                    (a == i and b == j + 1):
                branches += 1
        perimeter += 4 - branches
    return perimeter
