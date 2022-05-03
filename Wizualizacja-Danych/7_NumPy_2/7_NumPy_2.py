import numpy as np

#zadanie 1
x=np.arange(5,9)
y=np.arange(1,5)
print(a)
print(b)
a*=b
print(a)

#zadanie 2
x=np.random.rand(3,3)
y=np.random.rand(4,4)
print(x)
print(y)
print(x.min(axis=0))
print(x.min(axis=1))
print(y.min(axis=0))
print(y.min(axis=1))

#zadanie 3
x=np.arrange(5,9)
y=np.arrange(1,5)
print(a)
print(b)
z=np.dot(x,y)
print(z)

#zadanie 4
x=np.arrange(5,9)
y=np.arrange(1,5,dtype='float')
print(a)
print(b)
z=x*y
print(z)

#zadanie 5,6,7
tablica=np.array([[x*30 for x in range(y*3+1,y*3+3+1)]for y in range(0,2)])
a=np.sin(tablica)
tablica2=np.random.rand(2,3)
b=np.cos(tablica)
print(tablica)
print(tablica2)
print(a)
print(b)
print(a+b)

#zadanie 8
m=np.array([[x*2 for x in range(y*3+1,y*3+3+1)]for y in range(0,3)])
print(m)
for i in range(0,m.shape[1]):
    for j in range(0,m.shape[1]):
        print(a[j,i],end=" ")
    print(" ")

#zadanie 9
m=np.array([[x*2 for x in range(y*3+1,y*3+3+1)]for y in range(0,3)])
m2=np.arange(1,7).reshape(2,3)
print(m)
print(m2)
for i in m.flat:
    print(i,end=" ")
    if i%3==0:
        print(" ")
for i in m2.flat:
    print(i,end=" ")
    if i%3==0:
        print(" ")

#zadanie 10
m=np.random.rand(9,9)
print(m)
m2=m.reshape(3,27)
print(m2)

#zadanie 11
a=np.arange(12)
b=a.reshape(3,4)
c=a.reshape(4,3)
d=a.reshape(2,6)
print(a)
print(b)
print(c)
print(d)
print("\n")
b=b.ravel()
c=c.ravel()
d=d.ravel()
print(a)
print(b)
print(c)
print(d)