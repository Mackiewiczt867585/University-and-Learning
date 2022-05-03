# -*- coding: utf-8 -*-
"""
Created on Wed Mar  9 11:42:44 2022

@author: weron
"""
from math import sqrt

# mapowanie 
tab = ["oln","wawa","gdansk","pozn","sosnowiec"]
# uzywajac map oraz lambda uzyskaj liste z 1. literami
first_letters = map(lambda x: x[:3], tab)
print(list(first_letters))

# wczytanie danych z pliku i konvert na float
data = []
with open("australian.dat", "r", encoding="utf-8") as f:
    for line in f:
        # print(line, end="")
        data.append(list(map(lambda x: float(x),line.split())))
        
# print(data)
# with open("data.txt", "w", encoding="utf-8") as f:
#     for i in data:
#         f.write(str(i)+"\n")
        

# for i in range(5):
#     print(data[i])

# metryka - odleglosc miedzy 2 ob; i miara
# odl != 0 A i B

def metryka_euklidesowa(a:list, b:list):
    c = 0
    tmp = 0
    for i in range(len(a)-1):
        tmp = pow(a[i]-b[i],2)
        c += tmp
    return sqrt(c)

a =[1.0, 22.08, 11.46, 2.0, 4.0, 4.0, 1.585, 0.0, 0.0, 0.0, 1.0, 2.0, 100.0, 1213.0, 0.0]
b = [0.0, 22.67, 7.0, 2.0, 8.0, 4.0, 0.165, 0.0, 0.0, 0.0, 0.0, 2.0, 160.0, 1.0, 0.0]
c = [0.0, 29.58, 1.75, 1.0, 4.0, 4.0, 1.25, 0.0, 0.0, 0.0, 1.0, 2.0, 280.0, 1.0, 0.0]
d = [0.0, 21.67, 11.5, 1.0, 5.0, 3.0, 0.0, 1.0, 1.0, 11.0, 1.0, 2.0, 0.0, 1.0, 1.0]   
result = metryka_euklidesowa(a, b)
print(result)
result = metryka_euklidesowa(a, c)
print(result)
result = metryka_euklidesowa(a, d)
print(result)


#  dom funkcja, która policzy odleglosc zb = data ob= wiersz
# policz odlg dla kazdego elem tego zbioru 
# y = zb[0]
# policz odlg dl(x,y) gdzie x nalezy do zb/{zb[0]} tzn. dla kazdego elem oprocz 0
# pogrupowac wzgl klasy decyzyjnej tzn if x = 0 to odlg trafi do slownika {0:[lista odlg],1:[lista odlg], itd...}