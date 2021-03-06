import math as m
import numpy as np

def iloczyn_skalarny(matrix):
    return np.dot(matrix.T,matrix)

def odwrotnosc_m(matrix):
    return np.linalg.inv(matrix)

def lewa_odwrotnosc(matrix):
    kow = iloczyn_skalarny(matrix)
    odwrotnosc = odwrotnosc_m(kow)
    return np.dot(odwrotnosc,matrix.T)
  
def regresja_liniowa(matrix):
    matrix_x=np.array([[1,x[0]]for x in matrix])
    matrix_y=np.array([x[1]for x in matrix])
    lewa_odw = lewa_odwrotnosc(matrix_x)
    return np.dot(lewa_odw,matrix_y)
