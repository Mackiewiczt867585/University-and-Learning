package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;
import java.util.*;
import java.util.concurrent.atomic.LongAccumulator;

class Pracownik extends Osoba
{
    public Pracownik(String nazwisko, String[] imiona, LocalDate dataUrodzenia, boolean plec, LocalDate dataZatrudnienia)
    {
        super(nazwisko,imiona,dataUrodzenia,plec);
        this.pobory = pobory;
        this.dataZatrudnienia=dataZatrudnienia;
    }

    public double getPobory()
    {
        return pobory;
    }

    public LocalDate getDataZatrudnienia()
    {
        return dataZatrudnienia;
    }

    public String getOpis()
    {
        return String.format("pracownik zatrudniony %s z pensją %.2f zł",this.dataZatrudnienia.toString(), this.pobory);
    }

    private double pobory;
    private LocalDate dataZatrudnienia;
}