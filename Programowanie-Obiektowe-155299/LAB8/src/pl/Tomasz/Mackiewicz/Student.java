package pl.Tomasz.Mackiewicz;


import java.time.LocalDate;
import java.util.*;
import java.util.concurrent.atomic.LongAccumulator;

class Student extends Osoba
{
    public Student(String nazwisko, String[] imiona, LocalDate dataUrodzenia, boolean plec, String kierunek, double sredniaOcen)
    {
        super(nazwisko,imiona,dataUrodzenia,plec);
        this.kierunek = kierunek;
        this.sredniaOcen=sredniaOcen;
    }

    public String getOpis()
    {
        return "kierunek studiów: " + this.kierunek + "ze srednia:"+this.sredniaOcen;
    }

    public double getSredniaOcen()
    {
        return sredniaOcen;
    }

    public void setSredniaOcen(double sredniaOcen)
    {
        this.sredniaOcen=sredniaOcen;
    }


    private String kierunek;
    private double sredniaOcen;
}