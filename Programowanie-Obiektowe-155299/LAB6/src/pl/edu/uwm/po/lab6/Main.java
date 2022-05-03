package pl.edu.uwm.po.lab6;

import java.time.LocalDate;
import java.util.*;

public class Main {

    public static void main(String[] args)
    {
//        rachunekBankowy saver1 = new rachunekBankowy(2000);
//        rachunekBankowy saver2 = new rachunekBankowy(3000);
//
//        System.out.printf("saldo nr1="+saver1.getSaldo());
//        System.out.println("");
//        saver1.setRocznaStopaProcentowa();
//        saver1.obliczMiesieczneOdsetki();
//        System.out.println("");
//        System.out.println("Saldo po dodaniu odsetek="+saver1.getSaldo());
//
//        System.out.println("sando nr2="+saver2.getSaldo());
//        System.out.println("");
//        saver2.setRocznaStopaProcentowa();
//        saver2.obliczMiesieczneOdsetki();
//        System.out.println("");
//        System.out.println("saldo po dodaniu odsetek"+saver2.getSaldo());
//
//        /////////////////////////////////////////////////////////////////////
//
//        IntegerSet zbiorA= new IntegerSet();
//        IntegerSet zbiorB= new IntegerSet();
//        zbiorA.insertElement(24);
//        zbiorA.insertElement(31);
//        zbiorA.insertElement(34);
//        zbiorB.insertElement(65);
//        zbiorB.insertElement(34);
//        zbiorB.insertElement(21);
//        System.out.println(zbiorA);
//        System.out.println(zbiorB);
//        System.out.println(IntegerSet.union(zbiorA,zbiorB));
//        System.out.println(IntegerSet.intersection(zbiorA,zbiorB));
//        zbiorA.deleteElement(5);
//        System.out.println(zbiorA);
//        System.out.println(zbiorA.equals(zbiorB));
//        IntegerSet zbiorC= new IntegerSet();
//        zbiorC.insertElement(98);
//        zbiorC.insertElement(1);
//        System.out.println(zbiorA.equals(zbiorC));
//
//        /////////////////////////////////////////////

        Pracownik[] personel = new Pracownik[3];

        // wypełnij tablicę danymi pracowników
        personel[0] = new Pracownik("Karol Cracker", 75000, 2001, 12, 15);
        personel[1] = new Pracownik("Henryk Hacker", 50000, 2003, 10, 1);
        personel[2] = new Pracownik("Antoni Tester", 40000, 2005, 3, 15);

        // zwiększ pobory każdego pracownika o 20%
        for (Pracownik e : personel) {
            e.zwiekszPobory(20);
        }

        // wypisz informacje o każdym pracowniku
        for (Pracownik e : personel) {
            System.out.print("nazwisko = " + e.nazwisko() + "\tpobory = " + e.pobory());
            System.out.printf("\tdataZatrudnienia = %tF\n", e.dataZatrudnienia());
        }
        System.out.println();



    }
}
