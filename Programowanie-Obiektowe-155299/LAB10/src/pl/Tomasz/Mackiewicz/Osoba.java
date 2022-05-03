package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;

public class Osoba implements Cloneable, Comparable<Osoba> {
    public Osoba(String nazwisko,LocalDate dataUrodzenia)
    {
        this.dataUrodzenia=dataUrodzenia;
        this.nazwisko=nazwisko;
    }

    public String getNazwisko()
    {
        return this.nazwisko;
    }
    public LocalDate getDataUrodzenia()
    {
        return dataUrodzenia;
    }


    @Override
    public String toString()
    {
        return this.getClass().getSimpleName()+"["+this.nazwisko+","+this.dataUrodzenia.toString()+"]";
    }

    @Override
    public boolean equals(Object object)
    {
        Osoba tempObject = (Osoba) object;
        return (tempObject.nazwisko.equals(this.nazwisko)&& tempObject.dataUrodzenia.equals((this.dataUrodzenia)));
    }

    private LocalDate dataUrodzenia;
    private String nazwisko;

    @Override
    public int compareTo(Osoba object) {
        int nazwiskoCheck = this.nazwisko.compareTo(object.nazwisko);
        if(nazwiskoCheck==0)
        {
            return this.dataUrodzenia.compareTo(object.dataUrodzenia);
        }
        return nazwiskoCheck;
    }
}
