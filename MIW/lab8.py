from lab7 import projection, matrix_length, split_into_q_r 
import math
import numpy as np

def next_matrix(matrix,q,r):
    split_into_q_r(matrix, q, r)
    new_matrix = np.dot(np.array(q).T, matrix)
    return np.dot(new_matrix, q)

def eigenvalues(matrix):
    new_matrix = np.array(matrix)
    i = 0
    while (np.diag(new_matrix)-np.dot(new_matrix, np.ones((matrix.shape))).T).all()>0.001:
        q = []
        new_matrix = next_matrix(new_matrix, q, r)
        i = i + 1
        print("Eigen val nr "+str(i)+": ", new_matrix, sep="\n")
    return np.diag(new_matrix)

sample = np.array([[1.,2.,3.,4.,5.],[2.,2.,3.,4.,5.],[3.,3.,3.,4.,5.],[4.,4.,4.,4.,5.],[5.,5.,5.,5.,5.]])
q=[]
r=[]

print(eigenvalues(sample))