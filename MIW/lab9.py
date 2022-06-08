from msilib.schema import Error
import numpy as np


def gauss(matrix):
    w, h = matrix.shape
    extended = np.zeros((w, h+1))
    result = np.zeros((w,h))

    for i in range(w):
        
        if matrix[i][i] == 0:
            print("0 division")
            break

        for j in range(i+1, w):
            ratio = matrix[j][i]/matrix[i][i]

            for k in range(w+1):
                matrix[j][k] = matrix[j][k] - ratio * matrix[i][k]
    
    result[w-1] = matrix[w-1][w]/matrix[w-1][w-1]

    for i in range(w-2, -1, -1):
        result[i] = matrix[i][w]

        for j in range(i+1, w):
            result[i] = result[i] - matrix[i][j]*result[j]

        result[i] = result[i]/matrix[i][i]

    return result

matrix = np.array([[4,-2,4,-2,8],[3,1,4,2,7],[2,4,2,1,10],[2,-2,4,2,2]])

print(gauss(matrix))