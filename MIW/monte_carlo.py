import random 
import numpy as np

def func(x):
    return np.sin(x)

def integral(function, bottom_value, top_value):
    
    n = 1000                                # number of iterations
    array = np.zeros(n)                     # place to store x values
    integral = 0.0                          # place to store the result
                                            
    for i in range(len(array)):             
        array[i] = random.uniform(bottom_value, top_value)         # randomly chosen values x values

    for x in array:
        integral += function(x)             # sum of all the results

    result = ((bottom_value - top_value)/float(n))*integral   # derivative formula for the integral

    return result

print(integral(func, 0, np.pi))