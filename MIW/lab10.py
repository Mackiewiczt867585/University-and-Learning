import numpy as np
import math
from lab7 import matrix_length
from lab6 import odwrotnosc_m

#TRANSPOZYCJA
#MACIERZ ODWROTNA


def normalisation(matrix):
    matrix = np.array(matrix, dtype=np.float64)
    lenghts = []
    normalised_matrix = []
    for v in matrix:
        lenghts.append(matrix_length(v))
    for i in range(len(lenghts)):
        normalised_matrix.append(matrix[i]/lenghts[i])
    return np.array(normalised_matrix, dtype=np.float64)


sample = np.array([
    [1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, -1, -1, -1, -1],
    [1, 1, -1, -1, 0, 0, 0, 0],
    [0, 0, 0, 0, 1, 1, -1, -1],
    [1, -1, 0, 0, 0, 0, 0, 0],
    [0, 0, 1, -1, 0, 0, 0, 0],
    [0, 0, 0, 0, 1, -1, 0, 0],
    [0, 0, 0, 0, 0, 0, 1, -1],
], dtype=np.float64)

norm = normalisation(sample)
print("B")
print(norm)
print("\n \n")

norm_rev = odwrotnosc_m(norm)
print("B^-1")
print(norm_rev)
print("\n \n")

norm_trans = np.transpose(norm)
print("B^T")
print(norm_trans)
print("\n \n")

rev_dot_base = np.dot(norm, norm_rev)
print("B^-1 A")
print(rev_dot_base)
print("\n \n")

trans_dot_base = np.dot(norm, norm_trans)
print("B^T A")
print(trans_dot_base)
print("\n \n")
