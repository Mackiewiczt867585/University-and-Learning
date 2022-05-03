import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np

np.random.seed( 19544822 )
def randrange(n, vmin, vmax):
    return (vmax - vmin)*np.random.rand(n) + vmin
fig = plt.figure()
ax = fig.add_subplot( projection = '3d' )
n=20
xs = randrange(n, 0 , 100 )
ys = randrange(n, 0 , 100 )
zs = 0
ax.scatter(xs, ys, zs, c ='k', marker ='*')
ax.set_xlabel( 'X' )
ax.set_ylabel( 'Y' )
ax.set_zlabel( 'Z' )
xs = [0,25,25,80,80]
ys = [0,0,70,70,90]
zs = 0
ax.plot(xs, ys, zs, c ='y')
ax.set_zlim(0 , 1 )
ax.set_xlabel( 'X' )
ax.set_ylabel( 'Y' )
ax.set_zlabel( 'Z' )

plt.show()