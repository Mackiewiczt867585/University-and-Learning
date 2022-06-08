from hashlib import new
import math
import numpy as np
from sympy import Symbol, Eq


def u_matrix(matrix):
    u = []
    lamb = Symbol('lambda')
    new_matrix = np.dot(matrix.T, matrix)
    eq = []
    for i in range(len(new_matrix)):
        for j in range(len(new_matrix[i])):
            if i == j:
                eq.append(Eq(new_matrix[i][j] - lamb))
    print(eq)

    return np.array(u)


def e_matrix(matrix):
    w, h = matrix.shape
    e = np.zeros((w, h))
    for i in range(w):
        for j in range(h):
            if i == j:
                e[i][j] = 1 #change to eigen vals
    return np.array(e)


def v_matrix(matrix):
    v = []

    return np.array(v)


def svd_decomposition(matrix):
    U = u_matrix(matrix)
    E = e_matrix(matrix)
    V = v_matrix(matrix)

    print(U)
    print(E)
    print(V) 


sample = [[1, -2, 0], [0, -2, 1]]
sample = np.array(sample)
svd_decomposition(sample)