class robaczek:
    def __init__(self,x,y,krok):
        self.x=x
        self.y=y
        self.krok=krok

    def idz_w_gore(self,n):
        self.x=self.x+self.krok*n

    def idz_w_dol(self,n):
        self.x=self.x-self.krok*n
    
    def idz_w_lewo(self,n):
        self.y=self.y-self.krok*n
    
    def idz_w_prawo(self,n):
        self.y=self.y+self.krok*n

    def pokaz_gdzie_jestes(self):
        print('Wspolrzedna x=',self.x)
        print('Wspolrzedna y=',self.y)
    
    def __del__(self):      #zadanie 8
        del self.x
        del self.y
        del self.krok
        print('game over')

    
r=robaczek(0,0,1)
r.idz_w_gore(int(input("podaj ilosc krokow w gore:")))
r.pokaz_gdzie_jestes()
r.idz_w_dol(int(input("podaj ilosc krokow w dol:")))
r.pokaz_gdzie_jestes()
r.idz_w_lewo(int(input("podaj ilosc krokow w lewo:")))
r.pokaz_gdzie_jestes()
r.idz_w_prawo(int(input("podaj ilosc krokow w prawo:")))
r.pokaz_gdzie_jestes()
r='hehe'    #zadanie 8
print(r)
