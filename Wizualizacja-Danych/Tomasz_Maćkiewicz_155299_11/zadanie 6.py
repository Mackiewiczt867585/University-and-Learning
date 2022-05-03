import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

np.random.seed( 19654534 )

def randrange(n, vmin, vmax):
    return (vmax - vmin)*np.random.rand(n) + vmin
fig = plt.figure()
ax = fig.add_subplot( 121 , projection = '3d' )
n=20
xs = randrange(n, 0 , 100 )
ys = randrange(n, 0 , 100 )
zs = randrange(n, 0 , 100 )
ax.scatter(xs, ys, zs, c='r', marker='*')
ax.set_xlabel( 'X' )
ax.set_ylabel( 'Y' )
ax.set_zlabel( 'Z' )
ax = fig.add_subplot( 122 , projection = '3d' )
n=5
xs = randrange(n, 0 , 100 )
ys = randrange(n, 0 , 100 )
zs = randrange(n, 0 , 100 )
ax.plot(xs, ys, zs, c='g', marker='.')
ax.set_xlabel( 'X' )
ax.set_ylabel( 'Y' )
ax.set_zlabel( 'Z' )
plt.show()