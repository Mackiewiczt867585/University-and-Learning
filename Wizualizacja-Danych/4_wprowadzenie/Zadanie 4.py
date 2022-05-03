class nazakupy:
    def __init__(self,a,b,c,d):
        self.nazwa_produktu=a
        self.ilosc=b
        self.jednostka_miary=c
        self.cena_jednostkowa=d
    
    def wyswietl_produkt(self):
        print('nazwa produktu:',self.nazwa_produktu)
        print('ilosc:',self.ilosc)
        print('jednostka miary:',self.jednostka_miary)
        print('cena jednostkowa:',self.cena_jednostkowa)
    
    def ile_produktu(self):
        print('ilosc produktu:',self.ilosc,self.jednostka_miary)

    def ile_kosztuje(self):
        print('cena produktu:',self.ilosc*self.cena_jednostkowa,'zł/',self.jednostka_miary)

produkt1=nazakupy('pomidor',2,'kg',5)
nazakupy.wyswietl_produkt(produkt1)
nazakupy.ile_produktu(produkt1)
nazakupy.ile_kosztuje(produkt1)

