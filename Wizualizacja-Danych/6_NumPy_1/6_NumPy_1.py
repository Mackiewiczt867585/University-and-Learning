import numpy as np

#Zadanie 1
x=np.arange(3,8,4)
print(x)

#zadanie 2
x=np.arange(4,7.1,4.2, dtype='float')
print(x)
y=x.astype('int64')
print(y)

#zadanie 3
def tablica(x):
    return np.array([[y for y in range(z*x+1,z*x+x+1)] for z in range(0,n)])
print(tablica(4))

#zadanie 4
def generuj(x,y):
    return np.logspace(1,x,num=x,base=y)
print(generuj(4,20))

#zadanie 5
def diagonalna(x):
    return np.diag([y for y in range(x,0,-1)])
print(diagonalna(4))

#zadanie 6
def wykreslanka():
    slowa=['kwiat','owoc','mieso','slodycze','grzyb','kawa']
    w=np.array([[x for x in slowa[y]]for y in range(6)])
    return w
print(wykresl())

#zadanie 7
def macierz(x):
    m=np.diag([2 for x in range(x)])
    for y in range(2,n+1):
        m+=np.diag([2*i for x in range(n-i+1)],-(i-1))
        m+=np.diag([2*i for x in range(n-i+1)],(i-1))
    return m
print(macierz(7))

#zadanie 8
def funkcja(a,kierunek):
    boool=True
    if kierunek='pion':
        if a.shape[1]%2==0:
            m=int(a.shape[1]/2)
            a1=a[:,:c]
            a2=a[:,c:]
        else:
            boool=False
    elif kierunek=='poziom':
        if a.shape[0]%2==0:
            b=int(a.shape[0]/2)
            a1=a[:c,:]
            a2=a[c:,:]
        else:
            boool=False
    else:
        print('zle dane')
    if boool==True:
        return a1,a2
    else:
        print('zle wymiary tablicy')
        return 0,0
m=np.array([[x for x in range(y*6+1,x*6+6+1)]for y in range(0,6)])
print(m)
a1,a2=funkcja(m,'pion')
print(a1)
print(a2)

#zadanie9
def mfibo():
    fibo=[]
    fibo2=[]
    a=1
    b=1
    for x in range(5):
        for y in range(5):
            temp=b
            b+=a
            a=temp
            fibo2.append(a)
        fibo.append(fibo2)
        fibo2=[]
    m=np.array(fibo)
    print(fibo)
mfibo()