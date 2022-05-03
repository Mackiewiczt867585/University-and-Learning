import pandas as pd
import nupmy as np
import xlrd
import openxyl
import datetime

# #zadanie 1,2
# def a(df):
#     print(df[df['Liczba']>1000])

# def b(df):
#     print(df[df['Imie']=="Tomasz"])

# def c(df):
#     print(df.agg({"Liczba":['sum']}))

# def d(df):
#     x=df[(df['Rok']>=2000)&(df['Rok']<=2005)]
#     print(x.agg({"Liczba":['sum']}))

# def e(df):
#     ch=df[df["Plec"]=='M']
#     dz=df[df["Plec"]=='K']
#     print(ch.agg({"Liczba":["sum"]}),dz.agg({"Liczba":["sum"]}), sep="\n")
    
# def f(df):
#     p=df.sort_values("Liczba", ascending=False).groupby(['Rok',"Plec"]) 
#     for i,g in enumerate(p,start=1):
#         print(f"{g[0]}")
#         print(f"{g[1].iloc[[0],[1]].values[0][0]}", end=" ")
#         print(f"{g[1].iloc[[0],[2]].values[0][0]}")

# def g(df):
#     dz=df[df['Plec']=='K']
#     dz_max=df[df['Plec']=='K'].max()
#     print(dz[(dz['Liczba']==dz_max['Liczba'])])
#     ch=df[df['Plec']=='M']
#     ch_max=df[df['Plec']=='M'].max()
#     print(ch[(ch['Liczba']==ch_max['Liczba'])])

# df= pd.read_excel(pd.ExcelFile("imiona.xlsx"),"Arkusz1")
# print(df)
# a(df)
# b(df)
# c(df)
# d(df)
# e(df)
# f(df)
# g(df)

#zadanie 3
def a(df):
    print(df.Sprzedawca.unique())

def b(df):
    p=df.sort_values('Utarg',ascending=False)
    print(p.iloc[:5])

def c(df):
    p=df.groupby(['Sprzedawca']).agg({"idZamowienia":['count']})
    print(p)

def d(df):
    p=df.groupby(['Kraj']).agg({"idZamowienia":['count']})
    print(p)

def e(df):
    p=df.copy()
    p['year']=pd.DatetimeIndex(p['Data zamowienia']).year
    p=p.groupby(["year",'Kraj']).agg({"idZamowienia":['count']})
    print(p.index.values[5],p.values[5])

def f(df):
    p=df.copy()
    p['year']=pd.DatetimeIndex(p['Data zamowienia']).year
    p=p.groupby(["year"]).agg({"Utarg":['mean']})
    print(p.index.values[1],p.values[1][0])

def g(df):
    p=df.copy()
    p['Rok']=pd.DatetimeIndex(p['Data zamowienia']).year
    cztery=p[p["Rok"]==2004].copy()
    cztery=cztery.drop(['Rok'],axis=1)
    cztery.to_csv('zamowienia_2004.csv',header=True, index=False)
    pic=p[p["Rok"]==2005].copy()
    pic=pic.drop(['Rok'],axis=1)
    pic.to_csv('zamowienia_2005.csv',header=True, index=False)

df= pd.read_csv("zamowienia.csv",header=0,delimiter=";")
print(df)
a(df)
b(df)
c(df)
d(df)
e(df)
f(df)
g(df)
