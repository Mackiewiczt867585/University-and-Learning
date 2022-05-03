package pl.Tomasz.Mackiewicz;


import java.time.LocalDate;
import java.util.*;
import java.util.concurrent.atomic.LongAccumulator;

abstract class Osoba
{
    private String[] imiona;
    private String nazwisko;
    private LocalDate dataUrodzenia;
    private boolean plec;

    public Osoba(String nazwisko,String[] imiona,LocalDate dataUrodzenia,boolean plec)
    {
        this.nazwisko = nazwisko;
        this.imiona = imiona;
        this.dataUrodzenia = dataUrodzenia;
        this.plec = plec;
    }

    public String getNazwisko()
    {
        return nazwisko;
    }

    public String[] getImiona()
    {
        return imiona;
    }

    public LocalDate getDataUrodzenia()
    {
        return dataUrodzenia;
    }

    public boolean getPlec()
    {
        return plec;
    }
    public abstract String getOpis();

}