class slowa:
    slowo1='a'
    slowo2='b'

    def __init__(self,a,b):
        self.slowo1=a
        self.slowo2=b
    
    def sprawdz_czy_palindrom(self):
        print(self.slowo1,end=" ")
        if self.slowo1 != self.slowo1[::-1]:
            print('nie',end=" ")
        print('jest palindromem') 
        print(self.slowo2,end=" ")
        if self.slowo2 != self.slowo2[::-1]:
            print('nie',end=" ")
        print('jest palindromem')
    
    def sprawdz_czy_metagramy(self):
        czy=False
        if len(self.slowo1)==len(self.slowo2):
            inne_litery=0
            for i in range(len(self.slowo1)):
                if self.slowo1[i]!=self.slowo2[i]:
                    inne_litery+=1
            if inne_litery==1:
                czy=True
        if czy==True:
            print("slowa sa mtagramami")
        else:
            print("slowa nie sa metagramami")
    
    def sprawdz_czy_anagramy(self):
        czy=True
        if len(self.slowo1)==len(self.slowo2):
            napis = self.slowo2
            for znak in self.slowo1:
                if znak in napis:
                    i = napis.index(znak)
                    napis = napis[:i]+napis[i+1:]
                else:
                    czy=False
        else:
            czy=False
        if czy:
            print("Slowa sa anagramami.")
        else:
            print("Slowa nie sa anagramami.")  


piewrsze=slowa('kee','hee')
piewrsze.sprawdz_czy_palindrom()
piewrsze.sprawdz_czy_metagramy()
piewrsze.sprawdz_czy_anagramy()