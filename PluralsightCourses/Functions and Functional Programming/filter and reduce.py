from functools import reduce
import operator
###########

positives = filter(lambda x: x>0, [1,-5,0,6,-2,8])
print(list(positives))

###########

reduce(operator.add, [1,2,3,4,5])
numbers = [1,2,3,4,5]
accumulator = operator.add(numbers[0],numbers[1])
for item in numbers[2:]:
    accumulator = operator.add(accumulator,item)

print(accumulator) 

def mul(x,y):
    print('mul {} {}'.format(x,y))
    return x*y

reduce(mul,range(1,10))