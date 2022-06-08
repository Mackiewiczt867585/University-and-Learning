import numpy as np
from lab7 import split_into_q_r

def eigenvalues(matrix):
    vals = np.array(matrix)
    print(matrix)
    q = []
    r = []
    split_into_q_r(matrix, q, r)
    vals = np.dot(r, q)
    vals = (list(x) for x in vals)
    return vals


sample = np.array([[1,1,0], [1,0,1], [0,1,1]])

eigen = eigenvalues(sample)

print([x for x in eigen])
