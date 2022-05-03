package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;

public class Student extends Osoba implements Cloneable,Comparable<Osoba> {

    public Student(String nazwisko, LocalDate dataUrodzenia, double sredniaOcen)
    {
        super(nazwisko,dataUrodzenia);
        this.sredniaOcen=sredniaOcen;
    }

    @Override
    public String toString()
    {
        return this.getClass().getSimpleName()+"["+this.getNazwisko()+","+this.getDataUrodzenia().toString()+","+this.sredniaOcen+"]";
    }

    @Override
    public int compareTo(Osoba czlowiek)
    {
        int last=super.compareTo(czlowiek);
        if((czlowiek instanceof Student)&&(last==0))
        {
            return -(int)Math.ceil(this.sredniaOcen-((Student)czlowiek).sredniaOcen);
        }
        return last;
    }

    private double sredniaOcen;
}
