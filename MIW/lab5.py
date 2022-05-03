import math
import numpy as np

data = []
with open("australian.dat", "r", encoding="utf-8") as data_file:
    for line in data_file:
        data.append(list(map(lambda x: float(x), line.split())))

def avg(list):
    sum = 0.0
    for row in list:
        sum+=row
    return sum/len(list)

def avg2(list):
    return float(np.dot(list, [1 for x in list]))/len(list)

def variation(list):
    average = avg2(list)
    sum = 0.0
    for row in list:
        sum += pow((row - average), 2)
    return sum/len(list)

def var2(list):
    average = avg2(list)
    avg_list = [average for x in list]
    diff = np.array(list) - np.array(avg_list)
    result = np.dot(diff, diff) / len(list)
    return result 

def standard_deviation(list):
    return math.sqrt(variation(list))

def function(list):
    

test = [row[0] for row in data]
print(avg(test))
print(avg2(test))
print(variation(test))
print(var2(test))
print(standard_deviation(test))

samples = [[2,1], [5,2], [7,3], [8,3]]
