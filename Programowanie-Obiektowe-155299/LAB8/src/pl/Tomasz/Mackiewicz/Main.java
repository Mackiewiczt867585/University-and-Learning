package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;
import java.util.*;
import java.util.concurrent.atomic.LongAccumulator;

public class Main
{
    public static void main(String[] args)
    {
        Osoba[] ludzie = new Osoba[2];

        ludzie[0] = new Pracownik("Kowalski",  new String[]{"Jan"},LocalDate.of(2000,06,26),false,LocalDate.of(2018,01,02));
        ludzie[1] = new Student("Nowak", new String[]{"Małgorzata"},LocalDate.of(1990,3,23),true,"informatyka",4.5);

        for (Osoba p : ludzie) {
            System.out.println(p.getNazwisko() + ": " + p.getOpis());
        }
    }
}