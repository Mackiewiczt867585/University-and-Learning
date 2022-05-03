import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np

colormaps=['binary', 'pink', 'autumn', 'winter', 'cool']
fig = plt.figure()
for x in range(321,326,1):
    t=colormaps[325-x]
    ax = fig.add_subplot( x , projection = '3d' )
    X = np.arange(- 5 , 5 , 0.25 )
    Y = np.arange(- 5 , 5 , 0.25 )
    X, Y = np.meshgrid(X, Y)
    R = np.sqrt(X** 2 + Y** 2 )
    Z = np.sin(R)
    surf = ax.plot_surface(X, Y, Z, cmap =plt.get_cmap(t),linewidth = 1 , antialiased = False )
    ax.set_zlim(- 1.01 , 1.01 )
    ax.zaxis.set_major_locator(LinearLocator( 10 ))
    ax.zaxis.set_major_formatter(FormatStrFormatter( '%.02f' ))
    fig.colorbar(surf, shrink = 0.4 , aspect = 10 )
plt.show()