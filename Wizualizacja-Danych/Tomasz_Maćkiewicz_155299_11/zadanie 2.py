import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

np.random.seed( 19680645 )

def randrange(n, min, max):
    return (max - min)*np.random.rand(n) + min

kolory=['yellow','blue','red','green','cyan']
markers=['.','o','v','*','p']

fig = plt.figure()
ax = fig.add_subplot( 111 , projection = '3d' )
n = 100

xs = randrange(n, 0 , 100 )
ys = randrange(n, 0 , 100 )
for x in range(0,5,1):
    zs = randrange(n, 0+20*(x-1), 20*x+1)
    ax.scatter(xs,ys,zs, c=kolory[x], marker=markers[x])

ax.set_xlabel( 'X' )
ax.set_ylabel( 'Y' )
ax.set_zlabel( 'Z' )
plt.show()