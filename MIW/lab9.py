from unittest import result
import numpy as np


def gauss(matrix):
    matrix = np.array(matrix, dtype=np.float64)
    matrix.dtype = np.float64
    for x in range(len(matrix)):
        for y in range(x+1, len(matrix)):
            rat = matrix[y][x]/matrix[x][x]
            for z in range(len(matrix)+1):
                matrix[y][z] = matrix[y][z] - rat * matrix[x][z]
    return matrix

def gauss_cont(matrix):
    result = np.zeros(len(matrix))
    result[len(matrix)-1] = matrix[len(matrix)-1][len(matrix)]/matrix[len(matrix)-1][len(matrix)-1]
    for x in range(len(matrix)-2, -1, -1):
        result[x] = matrix[x][len(matrix)]
        for y in range(x+1, len(matrix)):
            result[x] = result[x] - matrix[x][y] * result[y]
        result[x] = result[x] / matrix[x][x]
    return result

def full_gauss(matrix):
    return gauss_cont(gauss(matrix))

matrix = np.array([[4,-2,4,-2,8],[3,1,4,2,7],[2,4,2,1,10],[2,-2,4,2,2]])

print(full_gauss(matrix))
