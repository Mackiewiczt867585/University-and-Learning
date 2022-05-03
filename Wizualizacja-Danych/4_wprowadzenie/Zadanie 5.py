class ciagi_art:
    pierwszy_el=0
    roznica=0
    il_wyrazow_ciagu=0

    def pobierz_elementy(self,a,b):
        self.pierwszy_el=a
        self.roznica=b

    def wyswietl_dane(self):
        print('a1=',self.pierwszy_el)
        print('roznica=',self.roznica)
        print('ilosc wyrazow ciagu:',self.il_wyrazow_ciagu)

    def pobierz_parametry(self,a,b,c):
        self.pierwszy_el=a
        self.roznica=b
        self.il_wyrazow_ciagu=c
    
    def policz_sume(self):
        return ((self.pierwszy_el+(self.pierwszy_el+self.roznica*(self.il_wyrazow_ciagu-1)))/2)*self.il_wyrazow_ciagu

    def policz_elementy(self):
        for i in range(self.il_wyrazow_ciagu):
            print("a_",i+1,": ",self.pierwszy_el+self.roznica*(i),sep="", end=" ")

c=ciagi_art()
c.pobierz_parametry(int(input('podaj 1 element ciagu:')),int(input('podaj roznice:')),int(input('podaj ilosc wyrazow:')))
c.wyswietl_dane()
c.policz_sume()
c.policz_elementy()
