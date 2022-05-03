import pandas as pd
import numpy as np
import xlrd
import openpyxl
import matplotlib.pyplot as plt


#zadanie 1
df= pd.read_excel(pd.ExcelFile("imiona.xlsx"),"Arkusz1")
print(df)
p=df.groupby(['Rok']).agg({'Liczba':['sum']})
p.plot(xticks=p.index.values)
plt.legend()
plt.show()

#zadanie 2
df= pd.read_excel(pd.ExcelFile("imiona.xlsx"),"Arkusz1")
print(df)
p=df.groupby(['Plec']).agg({'Liczba':['sum']})
print(p)
wykres=p.plot.bar()
wykres.set_ylabel('Mln')
wykres.legend()
plt.title('Liczba urodzonych dzieci wzgledem plci:')
plt.show()

#zadanie 3
df= pd.read_excel(pd.ExcelFile("imiona.xlsx"),"Arkusz1")
pd=df.agg({"Rok":['max']})
p=df[(df["Rok"]<= pd.values[0][0])&(df["Rok"]> pd.values[0][0]-5)]
pf=p.groupby(['Plec']).agg({'Liczba':['sum']})
print(pf)
wykres=pf.plot.pie(subplots=True, autopct='%.2f%%', fontsize=10, figsize=(6, 6))
plt.title('Ilosc urodzonch dzieci wzgledem plci:')
plt.show()

#zadanie 4
iris = datasets.load_iris()
df = pd.DataFrame(iris.data, columns = iris.feature_names)
plt.scatter(df['sepal length (cm)'], df['sepal width (cm)'], c=iris.target)
plt.show()

#zadanie 5
df= pd.read_csv("zamowienia.csv",header=0,delimiter=";")
p=df.groupby(['Sprzedawca']).agg({"idZamowienia":['count']})
print(p)
wykres = p.plot.bar()
wykres.legend()
plt.title('Ilosc zlozonych zamowien:')
plt.show()