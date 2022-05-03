import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

fig = plt.figure( figsize =( 8 , 3 ))
ax1 = fig.add_subplot( 151 , projection = '3d' )
ax2 = fig.add_subplot( 152 , projection = '3d' )
ax3 = fig.add_subplot( 153 , projection = '3d' )
ax4 = fig.add_subplot( 154 , projection = '3d' )
ax5 = fig.add_subplot( 155 , projection = '3d' )

_x = np.arange( 4 )
_y = np.arange( 5 )
_xx, _yy = np.meshgrid(_x, _y)
x=_xx.ravel()
y=_yy.ravel()
top = x + y
bottom = np.zeros_like(top)
width = depth = 1
ax1.bar3d(x, y, bottom, width, depth, top, shade = True ,color = 'b')
ax1.set_title('zacieniony')
ax2.bar3d(x, y, bottom, width, depth, top, shade = True , alpha = 0.5, color = 'r')
ax2.set_title('przeswitujacy')
ax3.bar3d(x, y, bottom, width, depth, top, shade = False,color='g')
ax3.set_title('nie zacieniony')
ax4.bar3d(x, y, bottom, width, depth, top, shade = False,color = 'pink', edgecolor=['k','c','w'])
ax4.set_title('z krawiedziami')
ax5.bar3d(x, y, bottom, width, depth, top, shade = True, color = 'm', zsort='max')
ax5.set_title('z krawiedziami')
plt.show()