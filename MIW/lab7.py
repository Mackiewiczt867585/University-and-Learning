import math
from tabnanny import check
import numpy as np

def projection(u,v):
    return (np.dot(u.T, v)/np.dot(u.T, u))*u

def matrix_length(v):
    return math.sqrt(np.dot(v.T, v))

def split_into_q_r(matrix, q, r):
    vectors_list = [ [x[i] for x in matrix] for i in range(len(matrix[1])) ]
    u_list = []

    for vector in vectors_list:
        vector = np.array(vector)
        projection_sum = 0
        for u_x in u_list:
            u_x = np.array(u_x)
            projection_sum += projection(u_x, vector)
        u = vector - projection_sum
        u_list.append(u)
        e = (1/matrix_length(u))*u
        q.append(e)
    
    q = np.array(q).T
    temp_r = np.dot(q.T, matrix)
    for vector in temp_r:
        r.append(vector)
    r = np.array(r)

sample = np.array([[1,0,1], [1,1,0], [0,1,1]])
q=[]
r=[]

split_into_q_r(sample, q, r)

print(q)
print(r)

test = np.round(np.dot(np.array(q).T, np.array(r)), decimals=2)
print(test)